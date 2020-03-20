//Programa que descobre o numero de patos e coelhos a partir do nmr de cabecas e patas
//Criado por Pedro Pignanelli, 14/03/2020
//Professor Jó Ueyama

#include <stdio.h>                               //Bibliteca necessaria

int main(){

int n_head, n_feet, n_bunny, n_duck;             //Variaveis necessarias

printf ("\nHow many heads are in the farm?");      //inserir os valores das variaveis
scanf ("%d", &n_head);
        while ((n_head)<=0)
        {                                       //condicoes de validacao
            printf ("\n Please, insert a valid number for 'head'");
            scanf ("%d", &n_head);
        }

printf ("\nHow many feet are in the farm?");
scanf ("%d", &n_feet);
        while ((n_feet)<=0)
        {
            printf ("\nPlease, insert a valid number for 'feet'");
            scanf ("%d", &n_feet);
        }   

        
        n_bunny = (n_feet - 2*n_head)/2;        //contas apos a insercao de valores validos
        n_duck = n_head - n_bunny;

        printf ("\nYou have %d duck(s) and %d bunnies", n_duck, n_bunny);
    
  

system ("pause");
return 0;
}