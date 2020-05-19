//Pedro Pignanelli e Luis Vianna
//Prof Jo Ueyama

#include <stdio.h>
#include <stdlib.h>

//definição da struct
struct data{
    char nome[40];
    float altura;
    float peso;
    char sexo;
    int id;
};

int main (){
    
    int N;
    //primeira linha, le quantas pessoas serao guardadas
    printf ("\nQuantas pessoas voce deseja registrar?\n");
    scanf ("%d", &N);
    fflush (stdin); //usei bastante esse comando para evitar dar problemas com o scanf
                    //(recomendacao dos colegas de sala)

    //associa as informacoes da pessoa a struct
    struct data paciente[N];
    
    for (int i = 0; i < N; i++){
        printf ("\nInsira os dados da pessoa #%d a ser registrada:\n", (i+1));
        printf ("\nInsira o nome completo da pessoa\n");
        fgets (paciente[i].nome, 40, stdin);
            fflush (stdin);
        printf("\nInsira a altura da pessoa em metros\n");
        scanf ("%f", &paciente[i].altura);
            fflush (stdin);
        printf("\nInsira o peso da pessoa em kg\n");
        scanf ("%f", &paciente[i].peso);
            fflush (stdin);
        printf("\nInsira o genero da pessoa (M ou F)\n");
        scanf ("%c", &paciente[i].sexo);
            fflush (stdin);
        printf("\nInsira a identidade da pessoa\n");
        scanf ("%d", &paciente[i].id);  
            fflush (stdin);
    }

    //esse bloco analisa se um ID pesquisado corresponde a algum id no banco de dados
    //e imprime os dados do paciente em caso de correspondencia entre os IDs
    int pesquisa;

    for (int c = 0; ; c++){ 
        scanf ("%d", &pesquisa);        //aqui fizemos um loop 'infinito' que so se encerra quando 
        if (pesquisa == -1) break;      //o valor '-1' e associado a variavel pesquisa
        else{
            for (int i = 0; i < N; i++){
                if (pesquisa == paciente[i].id){
                    printf ("\nnome: %s\naltura: %.2f\npeso: %.2f\ngenero: %c\nid: %d\n", paciente[i].nome, paciente[i].altura, paciente[i].peso, paciente[i].sexo, paciente[i].id);
                    break;
                }
            }
        }
    }
    return 0;
}