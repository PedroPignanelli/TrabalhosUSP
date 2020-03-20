//Consumo e rendimento do carro
//Pedro Pignanelli
//Professor Jo Ueyama
//17/03/2020
#include <stdio.h>

int main(){

    float dist_percorrida;
    float gas_consumido;
    float dist_por_gas;

    printf ("Insira a distancia total percorrida");
    scanf ("%f", &dist_percorrida);

    printf ("Insira a quantidade de gasolina consumida");
    scanf ("%f", &gas_consumido);

    dist_por_gas = (dist_percorrida)/(gas_consumido);

    if (dist_por_gas < 8)
    {
        printf ("Venda o carro!");
    }
    if (dist_por_gas>=8 && dist_por_gas<=14)
    {
        printf ("Economico!");
    }
    if (dist_por_gas>14)
    {    
        printf ("Super economico!");
    }

    system ("pause");

return 0;
}