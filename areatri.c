//CÁLCULO DA ÁREA DO TRIÂNGULO
//Criado por Pedro Luiz Miranda Pignanelli - 13/03/2020
//Inicio do programa
#include <stdio.h>

//Bloco principal do codigo
float main () {
    float b;
    float h;
    float a;
    float c;
    
    printf ( "Insira o valor da base");//Solicita o valor da base
        scanf ("%f", &b);//Ler o valor inserido pelo usuario

        if (b<0||b==0)//condicoes de existencia do triangulo
        {
            while (b<=0)
            { printf ("\nInsira um valor valido para a base");
            scanf ("%f", &b);}            
        }
        else
        {} 

    printf ("\nInsira o valor da atura");//Solicita o valor do altura
        scanf ("%f", &h);//Le o valor inserido pelo usuario
        
        if (h<0||h==0)
        {
            while (h<=0)
            {printf ("\nInsira um valor valido para a altura");
            scanf ("%f", &h);}            
        }
        else
        {}           

        c = (b*h);//O programa faz as contas necessarias e informa a resposta
        a = c/2;  

        printf ("A area do triangulo e:%f\n", a);
    

    system ("pause");

return 0;
}