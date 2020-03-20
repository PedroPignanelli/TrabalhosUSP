//hrs trabalhadas na semana
#include <stdio.h>

void main(){

    float a, b, c, d, e;
    float horas_trabalhadas;
    float salario_semanal;

    printf ("digite horas trabalhadas na segunda");
    scanf ("%f", &a);
    printf ("digite horas trabalhadas na terca");
    scanf ("%f", &b);
    printf ("digite horas trabalhadas na quarta");
    scanf ("%f", &c);
    printf ("digite horas trabalhadas na quinta");
    scanf ("%f", &d);
    printf ("digite horas trabalhadas na sexta");
    scanf ("%f", &e);

        horas_trabalhadas = (a+b+c+d+e);

        salario_semanal = 10*horas_trabalhadas;

    printf ("%f" "Salario semanal e:", salario_semanal);

    system ("pause");
    //return 0;
}