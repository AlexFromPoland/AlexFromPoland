#include <stdio.h>

int main() {//funkcja glowna
	int ld;
	ld = komunikacja();
	zamiana(ld);//wyslanie do funkcji sprawdzonej liczby dziesietnej


	return 0;
}

int komunikacja() {
	int ld;
	printf("Podaj naturalna liczbe dziesietna ktora chcesz zamienic na liczbe binarna: ");
	scanf_s("%d", &ld);//Pobranie liczby od uzytkownika
	if (ld >= 0 ) {
		return ld;//zwrocenie tej liczby do glownej funkcji jesli jest wieksza od 0
	}
	else {
		printf("Podano zla liczbe!\n");
		komunikacja();//Ponowne wywolanie funkcji w przypadku podania zlej liczby
	}
}

int zamiana(int ld) {
	int lb[32];
	int r, poz = 0, i;

	while (ld != 0) {//Petla zapisujaca w tabeli reszty z dzielenia liczby dziesietnej
		r = ld % 2;
		ld = ld - r;
		ld = ld / 2;
		lb[poz] = r;
		poz++;

	}
	for (i = poz - 1; i >= 0; i--) //odwrotne odczytanie tabeli i wypisanie jej zawartosci
	{
		printf("%d", lb[i]);
	}

	return 0;
}