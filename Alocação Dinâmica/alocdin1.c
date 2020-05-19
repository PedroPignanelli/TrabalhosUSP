#include <stdio.h>
#include <stdlib.h>

int main(){
int count, i, j;


int **vet = (int**)malloc (3*sizeof(int *));
for (i = 0; i < 3; i++)
    vet[i] = (int *)malloc (4*sizeof(int));

count = 0;
for (i = 0; i < 3; i++)
{
    for ( j = 0; j < 4; j++)
        vet[i][j] = ++count;
}
for (i = 0; i<3; i++){
    for (j = 0; j<4; j++)
    printf ("%d", vet[i][j]);
}
for ( i = 0; i < 3; i++)
    free(vet[i]);
    
free (vet);

}