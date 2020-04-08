//jogo do PUM 91,2,3 PUM, 5, 6, 7 PUM...)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, N;

    printf ("Insira um valor inteiro positivo\n");
    scanf ("%d", &N);
    
    for ( i = 1; i <= (N*4); i = i + 4)
    {
        printf ("%d", i);
        printf ("\t%d", i+1);
        printf ("\t%d", i+2);
        printf ("\tPUM\n");
    }

system ("pause");
return 0;
}