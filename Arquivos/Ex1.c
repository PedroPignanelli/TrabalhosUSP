#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct data
{
    char str[64];
};


void _cnvert (struct data *frase){
for (int i = 0; i < 5; i++){
    for (int j = 0; j < strlen(frase[i].str); j++ ){
        frase[i].str[j] = toupper (frase[i].str[j]);
    }
}

};

int main (){
FILE *fp;
char *filename = "FrasesMaiusculas.txt";
char *mode = "w";

struct data frase[5];

for (int i = 0; i < 5; i++){
    fgets (frase[i].str, 64, stdin);
}

_cnvert (frase);

for (int i = 0; i < 5; i++){
    printf ("\n%s", frase[i].str);
}

fp = fopen(filename,mode);
for (int i = 0; i < 5; i++){
    fprintf (fp, "%s\n", frase[i].str);
}
fclose (fp);
printf ("\n");

return 0;
}