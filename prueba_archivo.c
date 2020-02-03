#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "numero_a_texto.h"

void numero_a_texto(int*);

FILE *fptr;

int main(int argc, char** argv)
{
    fptr = fopen("program.txt","w+");
    int num[] = {0, 0, 0, 0, 0, 0};

    if( fptr == NULL )
    {
        printf("Error!: ");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(int b=0; b<=9; b++)
            for(int c=0; c<=9; c++)
                for(int d=0; d<=9; d++)
                    for(int e=0; e<=9; e++)
                        for(int f=0; f <= 9; f++)
                            for(int g=0; g<=9; g++)
                            {
                                num[5] = b;
                                num[4] = c;
                                num[3] = d;
                                num[2] = e;
                                num[1] = f;
                                num[0] = g;
                                //printf("%d%d%d%d%d\n",num[4],num[3],num[2],num[1],num[0]);
                                numero_a_texto(num);
                            }
        fclose(fptr);
    }
    return EXIT_SUCCESS;
}

void numero_a_texto(int *num)
{
    char *numero_texto = malloc(80);
    convierte_numero_a_texto_hasta_999999(numero_texto,num);
    strcat(numero_texto,".\n");
    fprintf(fptr,numero_texto);
    free (numero_texto);
}
