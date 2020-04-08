#include <stdio.h>
#define SIZE 100

int main (){

float A[SIZE];
int i;

for (i=0; i<SIZE; i++)
scanf ("%f", &A[i]);

for (i=0; i<SIZE; i++){
    if (A[i]<=10){
        printf ("\n A[%d] = %0.1f", i, A[i]);
    }
}
system ("pause");
return 0;
}
