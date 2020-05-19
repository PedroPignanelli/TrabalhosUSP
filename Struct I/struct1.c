#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

struct notas{
    int id;
    int nota;
    };
     struct notas aluno[TAM];


int maior_nota ();

int main (int maior){

    srand (time (NULL));

    for (int i=0;i<TAM; i++){
        aluno[i].id = i;
        aluno[i].nota = rand()%11;
    }

    printf ("ID   Nota\n");
    for (int i = 0; i < TAM; i++){
        printf ("%d \t %d\n", aluno[i].id, aluno[i].nota);
    }

    printf ("\nMaior nota:  %d", maior_nota(maior));

return 0;
}

int maior_nota(int maior){
    maior = aluno[0].nota;
    for (int i = 1; i<TAM; i++){
        if (aluno[i].nota>maior) maior = aluno[i].nota;
        else {}
    }
return maior;
}
