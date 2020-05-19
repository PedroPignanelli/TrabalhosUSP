#include <stdio.h>

void troca_valor (int a, int b){
    int aux = a;
    a = b;
    b = aux;
}
void troca_ponteiro (int* a, int* b){
int aux = *a;
*a = *b;
*b = aux;
}

int main(){

    int x = 10;
    int y = 18;

    troca_valor (x,y);
    printf ("x = %d, y = %d\n", x, y);
    troca_ponteiro (x,y);
    printf ("x = %d, y = %d\n", x, y);

return 0;
}