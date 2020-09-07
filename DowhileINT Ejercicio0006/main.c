#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribe un programa que calcule la factorial de n, donde n es un numero entero ma-
yor o igual a 0 dado por el usuario.*/
    int ft, num=0, h=1;
    printf("ingrese un numero: ");
    scanf("%d",&ft);
    while(ft>0)
    {
         num=num+1;
        h=h*num;
        ft--;
    }
    printf("El factorial es: %d", h);

    return 0;
}
