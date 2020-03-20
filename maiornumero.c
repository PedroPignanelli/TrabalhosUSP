//Ler o maior numero
//Pedro Pignanelli
//20/03/2020
//Prof Jo Ueyama

#include <stdio.h>

int main (){

    float a, b, c, big_one;                    //variaveis 

    printf ("\nInsira o primeiro numero");
    scanf ("%f", &a);
    printf ("\nInsira o segundo numero");
    scanf ("%f", &b);
    printf ("\nInsira o terceiro numero");
    scanf ("%f", &c);

    if ((a>=b)&&(a>=c)){                      //condicionais
        big_one = a;
    }
    else if ((b>=a)&&(b>=c)){
        big_one = b;
    }
    else if ((c>=a)&&(c>=b)){
        big_one = c;
    }

        printf ("\n O maior numero e %f", big_one);

    system ("pause");

return 0;
}