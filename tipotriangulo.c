//Definir tipo de triangulo
//Pedro Pignanelli
//Prof Jo Ueyama
//17/03/2020

#include <stdio.h>

float main() {

    float a;//insere as variaveis
    float b;
    float c;

    printf ("\n\nBEM-VINDO ao software de definicao de tipos de triangulos!\n");

    printf ("\nInsira o valor do lado 'a'\n");//define valores para as variaveis
    scanf ("%f", &a);
    printf ("Insira o valor do lado 'b'\n");
    scanf ("%f", &b);
    printf ("Insira o valor do lado 'c'\n");
    scanf ("%f", &c);

    while (((a+b)<c)||((a+c)<b)||((b+c)<a))//condicoes para a existencia de um triangulo
        {
        printf ("\n ESTES VALORES SAO INVALIDOS PARA UM TRIANGULO!");
        printf ("\n Insira um valor valido para 'a'");
        scanf ("%f", &a);
        printf ("\n Insira um valor valido para 'b'");
        scanf ("%f", &b);
        printf ("\n Insira um valor valido para 'c'");
        scanf ("%f", &c);
        }

    if ((a!=b)&&(b!=c)&&(c!=a))//condicoes para o triangulo escaleno
        {
        printf ("\n O triangulo e ESCALENO\n");
        }
    else if ((a==b)&&(b==c))//condicoes para o triangulo equilatero
        {
        printf ("\n O triangulo e EQUILATERO\n");
        }
    else if ((a==b)&&(c!=a))//diferentes possibilidadesd e triangulos isosceles
        {
        printf ("\n O triangulo e ISOSCELES\n");
        }
    else if ((a==c)&&(b!=a))
        {
        printf ("\n O triangulo e ISOSCELES\n");    
        }
    else if ((b==c)&&(a!=b))
        {
        printf ("\n O triangulo e ISOSCELES\n");
        }

system ("pause");
return 0;
}