//informa quantos digitos o numero tem
//Pedro Pignanelli
//24/03/2020
//Prof. Jo Ueyama

#include <stdio.h>

int main(){

    int num;
    int cont = 0;

    printf ("\nInsira um valor inteiro\n");
    scanf ("%d", &num);

    do{
        cont = cont + 1;
        num = num / 10;
    }
    while (num != 0);
    
    printf ("\nO numero tem %d digitos\n", cont);
   

    system ("pause");
    return 0;
}