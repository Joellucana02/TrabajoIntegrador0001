#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se ingresan por teclado DNI, sexo (M o F) y año de nacimiento de un conjunto de
personas, el ingreso finaliza con DNI menor a 0. Se desea saber: cantidad de perso-
nas ingresadas por cada sexo porcentaje de personas menores de edad y cantidad
de personas con DNI inferior a 30Millones.*/

    //Probado
    int a_na=0, s_m=0, s_f=0, ed=0, lo=0;
    unsigned char se;
    float por_m=0, ca_t=0, ca_me=0;
    long dni=0;
    do
    {
        printf("Ingrese su sexo : ");
        while ((getchar()) != '\n');
        printf("Y Confirme su sexo, por favor: ");
        se = getchar();
        switch(se)
        {
        case 'm': case 'M':
            s_m++;
        break;
        case 'f': case 'F':
            s_f++;
            break;
        default :
            printf("ERROR");
        }
        printf("\nIngrese su año de nacimiento : ");
        scanf("%d" ,&a_na);
        ed=(2020 - a_na);
        ca_t++;
        if(ed<19)
        {
            ca_me++;
        }
        printf("Ingrese un DNI con valor cero o negativo para terminar.\nIngrese su DNI :");
        scanf("%d", &dni);
        if(dni<30000000)
        {
            lo++;
        }
    }
    while(dni>1);
    por_m=(ca_me*100/ca_t);
    printf("En el grupo hay %d Masculinos y %d Femeninos\nEl porcentaje de menores del grupo es: %.3f\nLa cantidad con DNI inferior a 30M es: %d", s_m, s_f, por_m, lo);
    return 0;
}
