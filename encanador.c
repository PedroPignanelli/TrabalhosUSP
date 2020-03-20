//incio encanador

#include <stdio.h>

    int main (){

     float n_dias; //numero de dias trabalhados
     float salario_liq;//salario liquito

        printf ("insira a qunatidade de dias trabalhados"); //ler a qnt de dias trabalhados
        scanf ("%f", &n_dias);

//fazer as contas
salario_liq = (20*n_dias)*0.92;

//exibir resultado
printf ("%f" "O salario e", salario_liq);

system ("pause");

return 0;
}