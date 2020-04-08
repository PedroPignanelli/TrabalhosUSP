#include <stdio.h>

int main(){

    float A[5];
    int x;
    
    for ( x = 0; x <= 99; x++)
    {
        scanf ("%f", &A[x]);
    }
    
    for (x = 0; x <= 99; x++)
    {
        if (A[x] <= 10)
        {
            printf ("A[%d] = %.1f", x, A[x]);
        }
    }
system ("pause");
return 0;
}