#include <stdio.h>
#define TAM 12


int main(){

    double M[TAM][TAM], soma = 0;
    char T[1];
    int L, i, j;

    scanf ("%d", &L);
    scanf ("%s", &T);

    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++)
            scanf ("%lf", &M[i][j]);    
    }

    for (j=0;j<TAM;j++)
        soma = soma + M[L][j];

    switch (T[0]){
        case 'S':
            printf ("%0.1lf\n", soma);
        break;

        case 'M':
            printf ("%0.1lf\n", (soma/TAM));
        break;

        default:
        break;
    }
return 0;
}