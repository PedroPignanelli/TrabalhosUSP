//
//
//
#include <stdio.h>

int main(){

    int num;
    int fat;

    do{
        printf ("\n Por favor, insira um valor inteiro positivo.\n");
        scanf ("%d", &num);
    } while (num<0);

    for (fat = 1; num > 1; num--){
        fat = fat * num;
    }
    printf ("\nO valor da fatorial de %d e: %d\n", num, fat);
    system ("pause");
    return 0;
}