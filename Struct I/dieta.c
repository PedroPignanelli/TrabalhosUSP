//Pedro Pignanelli e Luis Vianna
//Prof Jo Ueyama

#include <stdio.h>//sao essas mesmas as bibliotecas necessarias(??)
#include <stdlib.h>
#include <string.h>

//definicao da struct
struct info{
    char nome[20];
    int cal;
    int carb;
};

void troca ();
//le quantos alimentos serao analisados
int main(){
    int N;
    scanf ("%d", &N);
    //define e coleta as informacoes para compor a struct
    struct info alim[N];
    //cria uma struct auxiliar (aux) para poder organizar os produtos em ordem crescente de calorias
    struct info aux;
    for (int i = 0; i < N; i++){
        scanf ("%s", alim[i].nome);
        fflush (stdin);
        scanf ("%d", &alim[i].cal);
        fflush (stdin);
        scanf ("%d", &alim[i].carb);
        fflush (stdin);
    }

    troca (N, alim, aux);

    //imprime o resultado final em ordem
        for (int i = 0; i < N; i++){
        printf ("\n%d - %s", (i+1), alim[i].nome);
    }
    printf("\n");

return 0;

}
void troca (int N, struct info alim[N], struct info aux){

    for (int i = 0; i < N; i++){
        for (int j = (i+1); j < N; j++){
            if (alim[i].cal > alim[j].cal){
                aux = alim[i];
                alim[i] = alim[j];
                alim[j] = aux;
            }
        }
    }//faz o desempate para dois alimentos com mesma quantidade de calorias e reorganiza a ordem
    for (int i = 0; i < (N-1); i++){
        if (alim[i].cal == alim[i+1].cal){
            if (alim[i+1].carb < alim[i].carb){
                aux = alim[i];
                alim[i] = alim[i+1];
                alim[i+1] = aux;
            }
        }
    }

}