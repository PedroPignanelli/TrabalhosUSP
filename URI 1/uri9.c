#include <stdio.h>

int main(){
    int X, i;
    
    printf ("Insira uma variavel inteira positiva");
    scanf ("%d", &X);
    
    if (X == 0)
    {
        printf (" ");
    }
    else
    {
        for ( i = 1; i <= X; i++)
        {
            printf ("\t%d", i);
        }
    }
system ("pause");
return 0;
}