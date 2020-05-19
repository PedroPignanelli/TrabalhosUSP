//Pedro Pignanelli e Luis VIanna
//Prof. Jo Ueyama

#include <stdioh.h>
#include <stdlib.h>
#include <string.h>

//definir a variavel da struc
struct type{
    char nome[11];
    char cpf[15];
    int age;
};


int main(){

    //variaveis nmr de cadeiras e nmr de registros de compra
    int N, M;
    
    //estas variaveis serao uteis para associar as informacoes ao lugar que a pessoa comprou
    int aux_lug;
    int vet_aux[100];
    
    printf ("\nInsira o numero de cadeiras nesse onibus\n");
        scanf ("%d", &N);
    printf ("\nInsira o numero de compras a serem registradas agora\n");
        scanf ("%d", &M);

    //define a struct como um vetor
    struct type Registro[N];

    //define todas as posicoes do vet_aux (que marca a ocupacao ou nao do assento) como zero
    for (int i = 0; i < N; i++){
        vet_aux[i] = 0;
    }

    for (int i = 0; i < M; i++){                //roda as compras
        printf ("\n\nInsira o assento a ser comprado (de 1 ao maximo de assentos no onibus -> N)\n");
        scanf ("%d", &aux_lug);
            fflush (stdin);
        if (vet_aux[aux_lug-1] == 1){           //aux_lug - 1 pq o vetor varia de 0 a N-1 e a gente escreve de 1 a N
            i = i-1;//como a compra nao eh feita, fazemos i-1 para 'refazer' o pedido 'i', assim 'seguramos' o for
            printf ("\nCadeira %d ja comprada!\n", aux_lug);
            for (int c = 0; c < N; c++){
                if (vet_aux[c] == 1){
                    printf ("\n%d - %s %s %d", (c+1), Registro[c].nome, Registro[c].cpf, Registro[c].age);
                }
                else{
                    printf ("\n%d - NULL", (c+1));
                }
            }
        }
        else{
            vet_aux[aux_lug-1] = 1;                             //salva o lugar no vet_aux como 1, assim ele aparece como 'ja comprado'
            printf ("\nInsira o nome do passageiro\n");         //salva os demais dados do passageiro dentro daquele 'lugar' do onibus
                fgets (Registro[(aux_lug-1)].nome, 15, stdin);
                    fflush (stdin);
            printf ("\nInsira o CPF do passageiro\n"); 
                fgets (Registro[(aux_lug-1)].cpf, 15, stdin);
                    fflush (stdin);
            printf ("\nInsira a idade do passageiro\n"); 
                scanf ("%*d", &Registro[(aux_lug-1)].age);
                    fflush (stdin);
                printf ("\nAssento salvo!\n");
            
            }
    }
    

return 0;
}
