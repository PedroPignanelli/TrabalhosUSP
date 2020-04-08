#include <stdio.h>
#define TAM 12

int main (){

    double M[TAM][TAM], soma = 0.0;
    char O[1];
    int i, j, div, x=1;

    scanf ("%s", &O);

    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++)
            scanf ("%lf", &M[i][j]);
    }

    for (j=1;j<(TAM);j++,x++){
        for (i=0;i<x;i++){
            soma += M[i][j];
        }
    }

    div = ((TAM*TAM)-TAM)/2; 

switch (O[0]){

    case 'S' :
        printf ("%.1lf", soma);
        break;
    
    case 'M' :
        printf ("%.1lf", (soma / div));
        break;

    default:
        break;
}
return 0;
}