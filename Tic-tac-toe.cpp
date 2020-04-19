#include <stdio.h>
#include <stdlib.h>


int main (void)

{

    int fila,columna,salir;
    char numero,caracter;
    char raya[3][3]{
          49,50,51,
          52,53,54,
          55,56,57
    };
       printf ("\n\n");

     for (fila=0;fila<=0;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);
      printf("\n\t ===================");
      printf("\n");

       for (fila=1;fila<=1;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);
      printf("\n\t ===================");
       printf("\n");

       for (fila=2;fila<=2;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);




do
{
       printf ("\n\n\nEliga una casilla:");
       scanf ("%d",&numero);
       system ("cls");

       switch (numero)
       {
           case 1 : raya[0][0]=88;
           break;
           case 2 : raya[0][1]=88;
           break;
           case 3 : raya[0][2]=88;
           break;
           case 4 : raya[1][0]=88;
           break;
           case 5 : raya[1][1]=88;
           break;
           case 6 : raya[1][2]=88;
           break;
           case 7 : raya[2][0]=88;
           break;
           case 8 : raya[2][1]=88;
           break;
           case 9 : raya[2][2]=88;
           break;

           default:  printf("\Ha elegido una opcion no valida");
       }
             system ("cls");

         printf ("\n\n");
        for (fila=0;fila<=0;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);
      printf("\n\t ===================");
      printf("\n");

       for (fila=1;fila<=1;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);
      printf("\n\t ===================");
       printf("\n");

       for (fila=2;fila<=2;fila++)
        for (columna=0;columna<=2;columna++)
      printf ("\t |%c|  ",raya[fila][columna]);


       if (((raya[0][0]==88)&&(raya[0][1]==88)&&(raya[0][2]==88))||((raya[1][0]==88)&&(raya[1][1]==88)&&(raya[1][2]==88))||
        ((raya[2][0]==88)&&(raya[2][1]==88)&&(raya[2][2]==88))||((raya[0][0]==88)&&(raya[1][0]==88)&&(raya[2][0]==88))||
           ((raya[0][0]==88)&&(raya[1][1]==88)&&(raya[2][2]==88))||((raya[2][0]==88)&&(raya[1][1]==88)&&(raya[0][2]==88))||
           ((raya[0][2]==88)&&(raya[1][2]==88)&&(raya[2][2]==88))||((raya[0][1]==88)&&(raya[1][1]==88)&&(raya[2][1]==88)))
       {
           printf ("\n\n\nHa ganado...");
           printf ("\n\n\nPulse cualquier tecla para salir");
           numero=0;
       }


    }
       while (numero!=0);





    getchar ();


    return 0;


}
