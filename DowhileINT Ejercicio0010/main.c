#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribe un programa que calcule la división entera entre dos números a y b enteros
positivos sin usar el operador /.*/
    //Probado
    int a=0, b=0, c=0, d=0;
    printf("Ingrese un dividendo: ");
    scanf("%d",&a);
    printf("Ingrese un divisor: ");
    scanf("%d",&b);
    while (a>b)
    {
    c++;
    a = a-b;
    }
    printf("El cociente de la division es: %d",c);
    return 0;
}
