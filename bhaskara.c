// x²+bx+c=0
//delta=b²-4ac
//x=(-b+-raiz(delta))/2a

//bibliotecas necessarias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main (){

//variaveis necessarias - Bhaskara
    float a;
    float b;
    float c;
    float delta;
    float x1, x2;
    float result_x1, result_x2;

//inserir as variaveis da equacao - a, b, c
        printf ("Insira 'a'");
        scanf ("%f", &a);
        printf ("Insira 'b'");
        scanf ("%f", &b);
        printf ("Insira 'c'");
        scanf ("%f", &c);

//mostrar a equação completa
            printf ("Sua equação e: %f x^2 + %f x + %f = 0\n", a, b, c);

//a conta necessaria - Bhaskara
    delta = b*b - 4*a*c;

//"condicoes de existencia"
if (delta<0)
{
    printf ("Nao ha raizes reais para essa equacao\n");
}
else
{
    result_x1 = - (b) + sqrt(delta);
    result_x2 = - (b) - sqrt(delta);
    x1 = result_x1/(2*a);
    x2 = result_x2/(2*a);

    printf ("As raizes sao: %f\n e %f\n", x1, x2);
}

system ("pause");
}