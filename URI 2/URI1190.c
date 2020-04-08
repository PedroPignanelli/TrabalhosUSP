//AREA DIREITA
//URI 1190
//Pedro Pignanelli e Luís Vianna
//06/04/2020
//Prof. Jó Ueyama

#include <stdio.h>
#define TAM 12
//todas as variaveis que dependem do tamanho da matriz estão em funcao de TAM

int main (){
//TODAS AS VARIAVEIS NECESSARIAS
//relativos a matriz numerica - float
// "string" para pegara entrada de operação
    float M[TAM][TAM], soma_1 = 0.0, soma_2 = 0.0;
    float total, media;
    char O[1];
    int i, j, col = (TAM-1), div;
//PRIMEIRA ENTRADA
scanf ("%s", &O);
//ENTRADA DA MATRIZ
for (i=0;i<TAM;i++){
    for (j=0;j<TAM;j++)
        scanf ("%f", &M[i][j]); 
}
//soma valores da 'linha 1' ate a 'linha 5' da matriz
for (i=1;i<(TAM/2);i++){
    col--;
    for (j=(TAM-1);j>col;j--)
        soma_1 += M[i][j];
}
                //soma valores da 'linha 10' até a 'linha 6'
col = (TAM-1);  //redefine o valor de 'col' para o inicial
for (i=(TAM-2);i>=(TAM/2);i--){
    col--;
    for (j=(TAM-1);j>col;j--)
        soma_2 += M[i][j];
}

total = (soma_1 + soma_2);//valor da soma

div = ((((TAM*TAM)-TAM)/2)-(TAM/2))/2;
                    //calculo para achar o numero total de elementos da matriz
                    //para uma variavel TAM qualquer
media = total/div;  //valor da media

switch (O[0]){      //imprime o valor da soma ou da media
                    //com somente uma casa decimal ("%tipo.1")
    case 'S' :
        printf ("%.1lf\n", total);
        break;
    
    case 'M' :
        printf ("%.1lf\n", media);
        break;

    default:
        break;
}
return 0;
}