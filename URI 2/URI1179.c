#include <stdio.h>
int main(){

int v_base[15], v_imp[5], v_par[5];
int i, c, imp = 0, par = 0, a_imp = 0, a_par = 0;

for (i=0; i<15; i++)
    scanf ("%d", &v_base[i]);
    
    for (i=0; i<15; i++){

    if (a_par == 5){
            for (c=0; c<5; c++)
                printf ("par[%d] = %d\n", c, v_par[c]);
            a_par = 0;
    }
    if (a_imp == 5){
            for (c=0; c<5; c++)
                printf("impar[%d] = %d\n", c, v_imp[c]);
        a_imp = 0;        
    }

    if (v_base[i] % 2 == 0){
        v_par[par]=v_base[i];
        ++par;
        a_par++;
        if (par == 5) par = 0;
    }

    if (v_base[i] % 2 != 0){
        v_imp[imp]=v_base[i];
        ++imp;
        a_imp++;
        if (imp == 5) imp = 0;
    }
}

    for (c=0;c<a_imp;c++){
        printf ("impar[%d] = %d\n", c, v_imp[c]);
    }
    for (c=0;c<a_par;c++){
        printf ("par[%d] = %d\n", c, v_par[c]);
    }

return 0;
}