#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int igualdade (int M[TAM][TAM],int N[TAM][TAM], int validacao);

int main(){

    int M[TAM][TAM], N[TAM][TAM], i, j;
    int validacao;

    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++)
            M[i][j] = rand()%100;
    }
    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++)
            N[i][j] = rand()%100;
    }

    if(validacao == 0) printf ("IGUAIS");
    if (validacao == 1) printf ("DIFERENTES");
    
    return 0;
}

int igualdade (int M[TAM][TAM],int N[TAM][TAM], int validacao){
    validacao = 0;

    for (int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if (N[i][j] != M[i][j]){
                validacao = 1;
                break;
            }
        }
    }
    return (validacao);
}