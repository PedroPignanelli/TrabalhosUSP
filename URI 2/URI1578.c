#include <stdio.h>

int main (){
    unsigned short int num, M[100], i, j, amount;
    double MAT[100][20][20];   //associamos o numero da matriz no primeiro vetor
                                          // e os valores dela no segundo e terceiro vetor
scanf ("%hu", &amount);                //numero de matrizes
for (num=0;num<amount;num++){          //Escaneia cada matriz, sendo que o 'numero da matriz' vai no M[num]
   scanf ("%hu", &M[num]);            //escaneia o tamanho da matriz e associa ao vetor M[num], isso serve pra
   for (i=0;i<M[num];i++){            //que possamos separar cada valor de tamanho M[num] de cada matriz
       for (j=0;j<M[num];j++)
       scanf ("%lf", &MAT[num][i][j]);//escaneia os valores de cada matriz
    }
}
for (num=0; num<amount;num++){//imprime o resultados em ordem
    printf ("\n\nQuadrado da matriz #%hu", num+4);//num+4 porque o problema pede para que a matriz [0] seja
    for (i=0;i<M[num];i++){                       //chamada de matriz "#4"
        printf ("\n");
        for (j=0;j<M[num];j++){
            printf ("%.0lf\t", (MAT[num][i][j])*(MAT[num][i][j]));//imprime o quadrado do valor, sem casa decimal
        }       //AQUI É ONDE ESTAMOS COM PROBLEMA
    }
}
return 0;
}