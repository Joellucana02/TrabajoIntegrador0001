#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribe un programa que calcule la tabla de multiplicar de cualquier número entero
entre 1 y 10, dado por el usuario.*/
    //Probado

    int i, n;
        printf("Introduzca un numero: ");
        scanf("%d", &n);
        if(n<11&&n>0)
        {
              printf("La tabla de multiplicar de %d es:\n", n);
        for (i=1;i<=10;i++)
        {
            printf( "\n%d*%d=%d", i, n, i*n);
        }

        }

    return 0;
}
