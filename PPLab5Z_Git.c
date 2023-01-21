#include <stdio.h>
double mniejsza (double x, double y);

int main() {
	double x, y, min;
	printf("Podaj liczbe x: ");
	scanf_s("%lf", &x);
	printf("Podaj liczbe y: ");
	scanf_s("%lf", &y);//Pobranie liczb x i y
	min = mniejsza(x, y);//wywolanie funkcji mniejsza z argumentami faktycznymi
	printf("Mniejsze jest %lf", min);//Wypisanie mniejszej liczby

	return 0;
}
double mniejsza(double x, double y){//funkcja w ktorej zdefiniowane zmienne sa argumentami formalnymi
	double min;
	if (x < y) {//Porownanie przeslanych liczb
		min = x;
	}
	else if (y < x) {
		min = y;
	}
	else {
		return 0;
	}
	return min;//Zwrocenie do funkcji glownej liczby mniejszej
}