#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se ingresa número de factura, cantidad, precio unitario, numero de producto (el in-
greso finaliza con 999), calcular, producto más vendido y mayor importe vendido.*/

    //Probado
    // n_fac=numero de factura
    // ca=cantidad
    //p_uni=producto unidad
    //con=Almacena(p_uni)
    //ca_m=Producto para mayor importe
    /*
     int n_fac=0, ca=0, p_uni=0, n_pro=0, i=0, he=0, con=0, ca_m=0, he1=0, he2=0;
     while(i<3)
     {
         printf("\nIngrese un numero de factura : ");
         scanf("%d",&n_fac);
         printf("\nIngrese la cantidad que figura : ");
         scanf("%d",&ca);
         printf("\nIngrese el precio por unidad : ");
         scanf("%d",&p_uni);
         printf("\nIngrese el numero de producto : ");
         scanf("%d",&n_pro);
         if(ca>he)
         {
             he=ca;
             con=n_pro;
         }
         n_pro=0;
         ca_m=(ca*p_uni);
         if(ca_m>he1)
         {
             he1=ca_m;
             he2=n_fac;
         }
         ca_m=0;

         n_fac=0;
         p_uni=0;

         i++;
     }
     printf("El producto mas vendido tiene el numero de producto : %d\nLa cantidad del producto vendido es : %d\nEl mayor importe realizado es de : %d\nLa informacion del importe corresponde al numero de factura : %d", con, he, he1, he2);

    */

    /*No creo haber entendido del todo el ejercicio*/

     int n_fac=0, ca=0, p_uni=0, n_pro=0, i=0, he=0, con=0, ca_m=0, he1=0, he2=0;
     while(i<999)
     {
         printf("\nIngrese un numero de factura : ");
         scanf("%d",&n_fac);
         printf("\nIngrese la cantidad que figura : ");
         scanf("%d",&ca);
         printf("\nIngrese el precio por unidad : ");
         scanf("%d",&p_uni);
         printf("\nIngrese el numero de producto : ");
         scanf("%d",&n_pro);
         if(ca>he)
         {
             he=ca;
             con=n_pro;
         }
         n_pro=0;
         ca_m=(ca*p_uni);
         if(ca_m>he1)
         {
             he1=ca_m;
             he2=n_fac;
         }
         ca_m=0;

         n_fac=0;
         p_uni=0;

         i++;
     }
     printf("El producto mas vendido tiene el numero de producto : %d\nLa cantidad del producto vendido es : %d\nEl mayor importe realizado es de : %d\nLa informacion del importe corresponde al numero de factura : %d", con, he, he1, he2);
    return 0;
}
