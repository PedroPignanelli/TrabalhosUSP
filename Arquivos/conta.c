#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp, *fpb;
    char *filename = "conta.txt", *filenameb = "conta.bin";
    char *mode = "w", *modeb = "wb";
    float salario = 4000.123;
    float salariob = 4000.123;
    if ((fp = fopen(filename,mode)) != NULL){
        fprintf (fp, "%.3f", salario);
    }
    else
    {
        printf ("Erro na abertora do arquivo texto \n");
    }
    if ((fpb = fopen (filenameb,modeb)) != NULL){
        fprintf (fpb, "%.3f", salariob);
    }
    else   
    {
        printf ("Erro na abertura do arquivo binário \n");
    }
    fclose (fp);
    fclose (fpb);    
    
    system ("pause");
    return 0;
}