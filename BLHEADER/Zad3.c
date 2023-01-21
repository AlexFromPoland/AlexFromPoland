#include <stdio.h>

int main()
{
    float wzrost,waga,bmi,m;
    printf("podaj wzrost w cm: ");
    scanf("%f",&wzrost);
    printf("podaj wagê w kg: ");
    scanf("%f" ,&waga);
    m=wzrost/100;
    bmi=waga/(m*m);
    printf("Twoje bmi wynosi %f",bmi);
    return 0;
}
