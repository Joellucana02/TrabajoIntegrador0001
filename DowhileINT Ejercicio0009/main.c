#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribe un programa que calcule el producto de dos números a y b enteros positivos,
sin usar el operador *. */
    //probado
    int a=0, b=0, c=0, d=0, i=1;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese un numero: ");
    scanf("%d", &b);
    for(i=1;i<=b;i++)
    {
        c=c+a;
        d=d+c;
        c=0;
    }
    printf("Total :%d",d);

    return 0;
}
