#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int ac, sem, i, j;
    scanf ("%d", &ac);
    scanf ("%d", &sem);

int **vet = (int **)calloc (ac, sizeof(int *));
for (int i = 0; i < sem; i++)
    vet[i] = (int *)calloc (sem, sizeof(int));

for ( i = 0; i < ac; i++)
{
    for (int j = 0; j < sem; j++)
        vet[i][j] = rand()%100;
}

for ( i = 0; i < ac; i++)
{   printf ("\n");
    for (j = 0; j<sem;j++)
    printf ("%d\t",vet[i][j]);
}
return 0;
}