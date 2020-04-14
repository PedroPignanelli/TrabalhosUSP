#include <stdio.h>

int main(){
    int c, a;
    unsigned short int N, M, i, j;
    unsigned long int soma_1, soma_2, MAT[500][500], COLUNA[500][500];  //Duas matrizes: uma com os numeros e uma 
    char resp = 'S';                                    //outra com os digitos que devem ser iguais a zero
    scanf ("%hu %hu", &N, &M);                          //para que a matriz seja escada

    for(i=0; i<N; i++){
        for (j=0; j<M; j++){
            scanf ("%lu", &MAT[i][j]);
            COLUNA[i][j] = MAT[i][j];
        }
    }
    
    for ( i=0; i<N; i++){
        for (j=0; j<M; j++){
            c = j;
            soma_1 = 0;
            for (c; c>=0; --c){
                soma_1 = soma_1 + MAT[i][c];
            }
            if (soma_1 == 0){
                a = i + 1;
                for (a; a<N; a++){
                    COLUNA[a][j] = 0;
                }
            }
        }
    }
    
    for (i=0; i<N; i++){
        soma_2 = 0;
        for (j=0;j<M;j++){
            soma_2 = soma_2 + MAT[i][j];
        }
        if (soma_2 == 0){
            for(i; i<N; i++){
                for(j=0; j<M; j++){
                    COLUNA[i][j] = 0;
                }
            }
        }else{}
    }

    for (i=0; i<N; i++){
        for (j=0; j<M; j++){
            if (MAT[i][j] != COLUNA[i][j]){
                resp = 'N';
                break;
            }else {}
        }
    }
    
printf ("%c", resp);
return 0;
}