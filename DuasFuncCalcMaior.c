#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int CalculaMaior (int maior, int v[TAM]);

int main (){
    int maior;
    int v[TAM];
        for (int i = 0; i < TAM; i++)
        {
            v[i] = rand()%20;
        }
    maior = CalculaMaior (maior, v);
    printf ("\n o maior valor e %d\n", maior);

return 0;
}

int CalculaMaior (int maior, int v[TAM]){
    maior = v[0];
    for (int i = 0; i < TAM; i++)
    {
        if (v[i] > maior)
        maior = v[i];
    }
return (maior);
}