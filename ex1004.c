#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){

    int M[TAM][TAM], N[TAM][TAM], i, j;
    int validacao = 0;

    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++)
            M[i][j] = rand()%20;
    }
    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++)
            N[i][j] = rand()%20;
    }

    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if (N[i][j] != M[i][j]){
                validacao = 1;
                break;
            }
        }
    }
    if (validacao == 0 ) printf ("IGUAIS");
    else printf ("DIFERENTES");
    return 0;
}