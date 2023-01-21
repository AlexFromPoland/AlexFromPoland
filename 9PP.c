#include <stdio.h>
#include <stdlib.h>

int* tab;
void wyswietl_tab(const int tab[], int n)
{
printf("[");
    for (int i = 0; i < n; i++) {
        printf(" %d", tab[i]);
    }
printf(" ]\n");
}

int * tablica_wykonaj (int elem, int wart)
{
   
   int* tab = (int*)malloc(elem * sizeof(int));
    if (tab == NULL) {
        printf("nie mozna bylo przydzielic pamieci\n");
        return NULL;
    }
    for (int i = 0; i < elem; i++) {
        tab[i] = wart;
    }
    
    return tab;
}

int main(void)
{
    int *wt;
    int rozmiar;
    int wartosc;
    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &rozmiar);
    while(rozmiar > 0)
    {
        printf("Podaj wartosc: ");
        scanf("%d", &wartosc);
        wt = tablica_wykonaj(rozmiar, wartosc);
        if(wt)
        {
            wyswietl_tab(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow (<1 -koniec): ");
        scanf("%d", &rozmiar);
    }
    printf("Dziekuje za uwage.\n");
    free(tab);


return 0;
}


