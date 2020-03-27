//Soma do primeiro e ultimo digitos de umnumero
//Pedro Pignanelli
//24/03/2020
//Prof. Jo Ueyama

#include <stdio.h>
#include <math.h>

int main (){

int num;
int num_f;
int num_i;
int soma;

do{
    printf ("\nInsira um numero inteiro maior que 10\n");
    scanf ("%d", &num );
} while (num<10);

num_f = num % 10;

while (num>=10){
    num = num/10;
}

num_i = num;
soma = num_i + num_f;

printf ("\n A soma do digito inicial e final e %d\n", soma );

system ("pause");
return 0;
}