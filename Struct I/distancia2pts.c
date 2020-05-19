//Pedro Pignanelli e Luis Vianna
//Prof Jo Ueyama
//biblioteca math.h necessaria por conta do calculo da raiz quadrada
#include <stdio.h>
#include <math.h>

//definicao da struct
struct distancia{
    float a;
    float b;
};

int main(){

    //declaracao da struct (em forma de vetor)
    struct distancia ponto[2];

    //associacao dos pontos a struct
    scanf ("%f %f", &ponto[0].a, &ponto[0].b);
    scanf ("%f %f", &ponto[1].a, &ponto[1].b);

    //variaveis e procedimentos matematicos necessarios para os calculos 
    float dist_a, dist_b, dist_t;

    dist_a = ponto[1].a - ponto[0].a;
    dist_b = ponto[1].b - ponto[0].b;

    dist_t = sqrt((dist_a*dist_a)+(dist_b*dist_b));
    
    //impressao da resposta, com duas casas decimais
    printf ("%.2f", dist_t);
    return 0;
}