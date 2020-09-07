#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Un curso de 50 alumnos, cada uno identificado con un número correlativo del 1 al 50

para los cuales se ingresan una nota por trabajo práctico y una lista de notas corres-
pondiente a las actividades, esta nota finaliza con un ingreso negativo. Se desea co-
nocer por cada alumno: promedio general incluyendo la nota del TP, alumno con ma-
yor promedio, promedio general del curso y cantidad de alumnos con 2 o menos no-
tas ingresadas y cantidad de alumnos con T.P. aprobado.*/

    /*
    //Probado
    int i=0, tp_n=0, n=0, w_cont=0, n_t=0, h=0, h_alu=0, su_tp_ap=0, su_ca_n=0, co_alu=0;
    float pro_g=0, cont=0, pro_c=0, su_pro=0;
    for(i=0;i<3;i++)
    {
        printf("\nIngrese la nota del trabajo practico : ");
        scanf("%d",&tp_n);
        if(tp_n>6)
            {
                su_tp_ap++;
            }
        do
        {
            cont++;
            printf("Ingrese su nota : ");
            scanf("%d",&n);
            printf("Si no desea agregar mas notas ingrese un numero negativo, de lo contrario positivo : ");
            scanf("%d",&w_cont);
            su_ca_n++;

            n_t=n_t+n;
        }
        while(0<=w_cont);
         if(su_ca_n<=2)
            {
               co_alu++;
            }
        su_ca_n=0;
        pro_g= (n_t+tp_n)/(cont+1);
        printf("\nEL promedio general del alumno %d es de : %.3f", i, pro_g);
        cont=0;
        n_t=0;
        if(pro_g>h)
        {
            h=pro_g;
            h_alu=i;
        }
        su_pro=su_pro+pro_g;
        pro_c=(su_pro/3);
    }
    printf("\nEl alumno %d tiene el mayor promedio\nEl promedio general del curso es de : %.3f\nLa cantidad de alumnos con dos o menos notas ingresadas es : %d\nLa cantidad de alumnos con el tp aprobado es : %d", h_alu, pro_c, co_alu, su_tp_ap);
    */

    int i=0, tp_n=0, n=0, w_cont=0, n_t=0, h=0, h_alu=0, su_tp_ap=0, su_ca_n=0, co_alu=0;
    float pro_g=0, cont=0, pro_c=0, su_pro=0;
    for(i=0;i<50;i++)
    {
        printf("\nIngrese la nota del trabajo practico : ");
        scanf("%d",&tp_n);
        if(tp_n>6)
            {
                su_tp_ap++;
            }
        do
        {
            cont++;
            printf("Ingrese su nota : ");
            scanf("%d",&n);
            printf("Si no desea agregar mas notas ingrese un numero negativo, de lo contrario positivo : ");
            scanf("%d",&w_cont);
            su_ca_n++;

            n_t=n_t+n;
        }
        while(0<=w_cont);
         if(su_ca_n<=2)
            {
               co_alu++;
            }
        su_ca_n=0;
        pro_g= (n_t+tp_n)/(cont+1);
        printf("\nEL promedio general del alumno %d es de : %.3f", i, pro_g);
        cont=0;
        n_t=0;
        if(pro_g>h)
        {
            h=pro_g;
            h_alu=i;
        }
        su_pro=su_pro+pro_g;
        pro_c=(su_pro/50);
    }
    printf("\nEl alumno %d tiene el mayor promedio\nEl promedio general del curso es de : %.3f\nLa cantidad de alumnos con dos o menos notas ingresadas es : %d\nLa cantidad de alumnos con el tp aprobado es : %d", h_alu, pro_c, co_alu, su_tp_ap);
    return 0;
}
