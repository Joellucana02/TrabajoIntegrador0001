#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribe un programa que calcule la suma de todos los números múltiplos de 5 com-
prendidos entre dos enteros positivos ingresados por teclado.*/

    //Probado

    int i, ii, num, num1, con=0, con1=0;
    printf("Ingrese un valor: ");
    scanf("%d", &num);
    printf("Ingrese un valor: ");
    scanf("%d", &num1);
    if (num>num1)
    {
        for (num1=num1+1;num1<num;num1++)
        {
            printf("\nLos numeros interiores son: %d", num1);
            if(num1%5==0)
            {
                con=num1;
                con1=0+con;
            }

        }
         printf("La suma de los multiplos de cinco interiores es: %d", con1);
    }
    else
        {
            for (num=num+1;num<num1;num++)
        {
            printf("\nLos numeros interiores son: %d", num);
            if(num%5==0)
            {
                con=num;
                con1=0+con;
            }
        }
         printf("\nLa suma de los multiplos de cinco interiores es: %d", con1);
        }

    return 0;
}
