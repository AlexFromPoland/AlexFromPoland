#include <stdio.h>
#include <ctype.h>
void zlicz_wystapienia(char* tekst, int* litery, int *cyfry) {
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (isalpha(tekst[i])) {
            if (islower(tekst[i])) {
                litery[0]++;
            } else {
                litery[1]++;
            }
        } else if (isdigit(tekst[i])) {
            cyfry[0]++;
        }
    }
}

int ilosc_wystapien(char* tekst, char znak) {
    int licznik = 0;
    int i;
    for (i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            licznik++;
        }
    }
    return licznik;
}

int main() {
    char tekst[255];
    int litery[2] = {0}; // [0] - małe litery, [1] - duże litery
    int cyfry[1] = {0}; // [0] - cyfry
    printf("Podaj tekst: ");
    scanf("%s", tekst);
    zlicz_wystapienia(tekst, litery, cyfry);
    printf("Ilosc malych liter: %d\n", litery[0]);
    printf("Ilosc duzych liter: %d\n", litery[1]);
    printf("Ilosc cyfr: %d\n", cyfry[0]);
     char znak;
    printf("Podaj znak do sprawdzenia: ");
    scanf(" %c", &znak);
    int licznik = ilosc_wystapien(tekst, znak);
    printf("%c wystapil %d razy.\n", znak, licznik);
    return 0;
}
