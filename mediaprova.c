//media da prova
//Pedro Pignanelli
//15/03/2020
//Prof Jo Ueyama

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p1, p2, p3, media; //variaveis necessarias

    printf ("Insira a nota na Prova1");//atribuicao de valores as variaveis
    scanf ("%f", &p1);
    printf ("\nInsira a nota na Prova 2");
    scanf ("%f", &p2);
    printf("\nInsira a nota na Prova 3");
    scanf("%f", &p3);

    media = (p1+p2+p3)/3;//calculo da meida

    if (media>=5)
    {
        printf ("O aluno foi aprovado com media %f", media);
    }
    
else
{
    printf ("O aluno foi reprovado com media %f", media);
}
    system ("pause");
    return 0;
}