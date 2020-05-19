//Pedro Pignanelli, Luis Vianna
//Prof Jo Ueyama

#include <stdio.h>
#include <stdlib.h>

//Struct que conterá a data, horária e a atividade
struct agenda{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    char atividade[40];
};
int main(){
    int N;
    //Lê quantas atividades serão lidas
    printf("Digite o numero de atividades a serem gravadas: ");
    scanf("%d", &N);
    struct agenda info[N];
    //Lê cada informação de cada atividade
    for (int i=0;i<N;i++){
        printf("Compromisso %d\n", i+1);
        printf("Insira o dia, mes e ano: ");
        scanf("%d %d %d", &info[i].dia,&info[i].mes, &info[i].ano );
            fflush(stdin);
        printf("Insira a hora (hora, min, seg): ");
        scanf("%d %d %d", &info[i].hora, &info[i].minuto, &info[i].segundo);
            fflush(stdin);
        printf("Digite a atividade: ");
        fgets(info[i].atividade, 40, stdin);
        printf("\n");
    }
    //Imprime as informações de cada atividade
    for (int i=0;i<N;i++){
        printf("%02d/%02d/%d - %02d:%02d:%02d \n%s", info[i].dia,info[i].mes,info[i].ano,info[i].hora,info[i].minuto,info[i].segundo, info[i].atividade);
    }
}