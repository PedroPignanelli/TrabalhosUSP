//Programa que troca os valores das variaveis
//Insere 'a' e 'b', da valores a elas e depois troca 'a' por 'b' e 'b' por 'a'
//Criado por Pedro Pignanelli, 14/03/2020
//Professor Jó Ueyama
#include <stdio.h>

int main (void){

    int a, b, aux;                        //Cria as variaveis

    printf ("Insira a variavel 'a'");    //Da valores a elas
    scanf ("%d", &a);
    printf ("Insira a variavel 'b'");
    scanf ("%d", &b);
    printf ("As variaveis originais sao\n 'a' = %d\n 'b' = %d\n", a, b);
    aux=a;                                 //Processo de ordenamento com uso de var. auxiliar
    a=b;
    b=aux;
                                        //Imprime os novos valores na tela
    printf ("As variaveis trocas sao\n 'a' = %d\n 'b' = %d\n", a, b);

system ("pause");
return 0;    
}