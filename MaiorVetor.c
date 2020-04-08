#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int maior;
    int v[TAM];

    for (int i = 0; i < TAM; i++)
    {
        v[i] = rand()%20;
    }
    maior = v[0];
    for (int i = 0; i < TAM; i++)
    {
        printf ("%d\t", v[i]);
        if (v[i] > maior)
        maior = v[i];
    }
    printf ("\n o maior valor e %d\n", maior);
    
    return 0;
}