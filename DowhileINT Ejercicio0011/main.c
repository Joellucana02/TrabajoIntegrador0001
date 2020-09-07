#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Calcule el resto de una división entera sin usar los operadores / ni %.*/
    //Probado
    int a=0, b=0, c=0, d=0, e=0;
    printf("Ingrese un dividendo: ");
    scanf("%d",&a);
    printf("Ingrese un divisor: ");
    scanf("%d",&b);
    while (a>b)
    {
    c++;
    a = a-b;
    }
    printf("El cociente de la division es: %d\nEl resto es: %d", c, a);
    return 0;
}

