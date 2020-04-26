#include <stdio.h>
#include <stdlib.h>


int main (void)

{

    int fila,columna,player,contador;
    contador=0;
    char numero;
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



    printf ("\n\n\n\nFirst to select token \"O\":\n");
    printf ("\nSecond to select token \"X\":\n");
    printf ("\nPress ENTER to START.");
    getchar ();

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


   do
   {

    {
       printf ("\n\n\nToken \"O\", choose a box and press enter:");
       scanf ("%d",&numero);



       switch (numero)
       {
           case 1 : raya[0][0]=79;
           break;
           case 2 : raya[0][1]=79;
           break;
           case 3 : raya[0][2]=79;
           break;
           case 4 : raya[1][0]=79;
           break;
           case 5 : raya[1][1]=79;
           break;
           case 6 : raya[1][2]=79;
           break;
           case 7 : raya[2][0]=79;
           break;
           case 8 : raya[2][1]=79;
           break;
           case 9 : raya[2][2]=79;
           break;

           default:  printf("\You choose an incorrect option.");
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



      if (((raya[0][0]==79)&&(raya[0][1]==79)&&(raya[0][2]==79))||((raya[1][0]==79)&&(raya[1][1]==79)&&(raya[1][2]==79))||
        ((raya[2][0]==79)&&(raya[2][1]==79)&&(raya[2][2]==79))||((raya[0][0]==79)&&(raya[1][0]==79)&&(raya[2][0]==79))||
           ((raya[0][0]==79)&&(raya[1][1]==79)&&(raya[2][2]==79))||((raya[2][0]==79)&&(raya[1][1]==79)&&(raya[0][2]==79))||
           ((raya[0][2]==79)&&(raya[1][2]==79)&&(raya[2][2]==79))||((raya[0][1]==79)&&(raya[1][1]==79)&&(raya[2][1]==79)))
       {
           printf ("\n\n\nToken \"O\", you win!!...");
           numero='f';
       }
       else
    {

      for (fila=0;fila<3;fila++)
        for(columna=0;columna<3;columna++)
      {
          if (raya[fila][columna]==79)
          {
              contador++;
          }
      }

      if (contador==5)
      {
          printf ("\n\n\t\n\t DRAW !!");
          numero='f';
      }
       }


    }
      if (numero!='f')
    {


    {

        printf ("\n\n\nToken \"X\", choose a box and press enter:");
        scanf ("%d",&numero);


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
           case 10 : printf ("\Choose again");

           default: printf ("\nYou choose an incorrect option.");
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
           printf ("\n\n\nToken \"X\", you won!!...");
           numero='f';

       }

    }
   }
    else
        numero=='f';
    }

       while (numero!='f');



    printf  ("\n\n\n");


    getchar ();


    return 0;


}
