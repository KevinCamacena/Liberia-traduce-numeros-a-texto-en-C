#include "numero_a_texto.h"

void convierte_numero_a_texto_hasta_99_logic(char*,int*);
void convierte_numero_a_texto_hasta_999_logic(char*,int*);
void convierte_numero_a_texto_hasta_99999_logic(char*,int*);
void convierte_numero_a_texto_hasta_999999_logic(char*,int*);

void convierte_numero_a_texto_hasta_999999_logic(char *numero_txt, int *numero)
{
    /*
    * Centenas
    */
    switch (numero[5])
    {
    case 9:
        strcat(numero_txt,"novecientos ");
        break;
    case 8:
        strcat(numero_txt,"ochocientos ");
        break;
    case 7:
        strcat(numero_txt,"setecientos ");
        break;
    case 6:
        strcat(numero_txt,"seiscientos ");
        break;
    case 5:
        strcat(numero_txt,"quinientos ");
        break;
    case 4:
        strcat(numero_txt,"cuatrocientos ");
        break;
    case 3:
        strcat(numero_txt,"trescientos ");
        break;
    case 2:
        strcat(numero_txt,"doscientos ");
        break;
    case 1:
        if(numero[4] == 0 && numero[3] == 0)
            strcat(numero_txt,"cien mil ");
        else
            strcat(numero_txt,"ciento ");
        break;
    case 0:
        break;
    default:
        break;
    }
    convierte_numero_a_texto_hasta_99999_logic(numero_txt,numero);
}

void convierte_numero_a_texto_hasta_99999_logic(char *numero_txt, int *numero)
{
    /*
    * Decenas de millar
    */
    switch (numero[4])
    {
    case 9:
        strcat(numero_txt,"noventa ");
        break;
    case 8:
        strcat(numero_txt,"ochenta ");
        break;
    case 7:
        strcat(numero_txt,"setenta ");
        break;
    case 6:
        strcat(numero_txt,"sesenta ");
        break;
    case 5:
        strcat(numero_txt,"cincuenta ");
        break;
    case 4:
        strcat(numero_txt,"cuarenta ");
        break;
    case 3:
        strcat(numero_txt,"treinta ");
        break;
    case 2:
        switch (numero[3])
        {
        case 9:
            strcat(numero_txt,"veintinueve ");
            break;
        case 8:
            strcat(numero_txt,"veintiocho ");
            break;
        case 7:
            strcat(numero_txt,"veintisiete ");
            break;
        case 6:
            strcat(numero_txt,"veintiseis ");
            break;
        case 5:
            strcat(numero_txt,"veinticinco ");
            break;
        case 4:
            strcat(numero_txt,"veinticuatro ");
            break;
        case 3:
            strcat(numero_txt,"veintitres ");
            break;
        case 2:
            strcat(numero_txt,"veintidos ");
            break;
        case 1:
            strcat(numero_txt,"veintiuno ");
            break;
        case 0:
            strcat(numero_txt,"veinte ");
            break;
        default:
        break;
        }
    break;
    case 1:
        switch (numero[3])
        {
        case 9:
            strcat(numero_txt,"diecinueve ");
            break;
        case 8:
            strcat(numero_txt,"dieciocho ");
            break;
        case 7:
            strcat(numero_txt,"diecisiete ");
            break;
        case 6:
            strcat(numero_txt,"dieciseis ");
            break;
        case 5:
            strcat(numero_txt,"quince ");
            break;
        case 4:
            strcat(numero_txt,"catorce ");
            break;
        case 3:
            strcat(numero_txt,"trece ");
            break;
        case 2:
            strcat(numero_txt,"doce ");
            break;
        case 1:
            strcat(numero_txt,"once ");
            break;
        case 0:
            strcat(numero_txt,"diez ");
            break;
        default:
        break;
        }
    break;
    case 0:
        switch (numero[3])
        {
        case 9:
            strcat(numero_txt,"nueve ");
            break;
        case 8:
            strcat(numero_txt,"ocho ");
            break;
        case 7:
            strcat(numero_txt,"siete ");
            break;
        case 6:
            strcat(numero_txt,"seis ");
            break;
        case 5:
            strcat(numero_txt,"cinco ");
            break;
        case 4:
            strcat(numero_txt,"cuatro ");
            break;
        case 3:
            strcat(numero_txt,"tres ");
            break;
        case 2:
            strcat(numero_txt,"dos ");
            break;
        case 1:
            strcat(numero_txt,"");
            break;
        case 0:
        break;
        default:
        break;
        }
    break;
    default:
    break;
    }

    if( numero[4] > 2 )
    {
        switch (numero[3])
        {
        case 9:
            strcat(numero_txt,"y nueve ");
            break;
        case 8:
            strcat(numero_txt,"y ocho ");
            break;
        case 7:
            strcat(numero_txt,"y siete ");
            break;
        case 6:
            strcat(numero_txt,"y seis ");
            break;
        case 5:
            strcat(numero_txt,"y cinco ");
            break;
        case 4:
            strcat(numero_txt,"y cuatro ");
            break;
        case 3:
            strcat(numero_txt,"y tres ");
            break;
        case 2:
            strcat(numero_txt,"y dos ");
            break;
        case 1:
            strcat(numero_txt,"y un ");
            break;
        case 0:
            break;
        default:
        break;
        }
    }
    if(numero[4] == 0 && numero[3] == 0);
    else
        strcat(numero_txt,"mil ");

    convierte_numero_a_texto_hasta_999_logic(numero_txt,numero);
}

void convierte_numero_a_texto_hasta_999_logic(char *numero_txt, int *numero)
{
    /*
    * Centenas
    */
    switch (numero[2])
    {
    case 9:
        strcat(numero_txt,"novecientos ");
        break;
    case 8:
        strcat(numero_txt,"ochocientos ");
        break;
    case 7:
        strcat(numero_txt,"setecientos ");
        break;
    case 6:
        strcat(numero_txt,"seiscientos ");
        break;
    case 5:
        strcat(numero_txt,"quinientos ");
        break;
    case 4:
        strcat(numero_txt,"cuatrocientos ");
        break;
    case 3:
        strcat(numero_txt,"trescientos ");
        break;
    case 2:
        strcat(numero_txt,"doscientos ");
        break;
    case 1:
        if(numero[1] == 0 && numero[0] == 0)
            strcat(numero_txt,"cien");
        else
            strcat(numero_txt,"ciento ");
        break;
    case 0:
        break;
    default:
        break;
    }
    convierte_numero_a_texto_hasta_99_logic(numero_txt,numero);
}

void convierte_numero_a_texto_hasta_99_logic(char *numero_txt, int *numero)
{
    /*
    * Decenas
    */
    switch (numero[1])
    {
    case 9:
        strcat(numero_txt,"noventa ");
        break;
    case 8:
        strcat(numero_txt,"ochenta ");
        break;
    case 7:
        strcat(numero_txt,"setenta ");
        break;
    case 6:
        strcat(numero_txt,"sesenta ");
        break;
    case 5:
        strcat(numero_txt,"cincuenta ");
        break;
    case 4:
        strcat(numero_txt,"cuarenta ");
        break;
    case 3:
        strcat(numero_txt,"treinta ");
        break;
    case 2:
        switch (numero[0])
        {
        case 9:
            strcat(numero_txt,"veintinueve");
            break;
        case 8:
            strcat(numero_txt,"veintiocho");
            break;
        case 7:
            strcat(numero_txt,"veintisiete");
            break;
        case 6:
            strcat(numero_txt,"veintiseis");
            break;
        case 5:
            strcat(numero_txt,"veinticinco");
            break;
        case 4:
            strcat(numero_txt,"veinticuatro");
            break;
        case 3:
            strcat(numero_txt,"veintitres");
            break;
        case 2:
            strcat(numero_txt,"veintidos");
            break;
        case 1:
            strcat(numero_txt,"veintiuno");
            break;
        case 0:
            strcat(numero_txt,"veinte");
            break;
        default:
        break;
        }
    break;
    case 1:
        switch (numero[0])
        {
        case 9:
            strcat(numero_txt,"diecinueve");
            break;
        case 8:
            strcat(numero_txt,"dieciocho");
            break;
        case 7:
            strcat(numero_txt,"diecisiete");
            break;
        case 6:
            strcat(numero_txt,"dieciseis");
            break;
        case 5:
            strcat(numero_txt,"quince");
            break;
        case 4:
            strcat(numero_txt,"catorce");
            break;
        case 3:
            strcat(numero_txt,"trece");
            break;
        case 2:
            strcat(numero_txt,"doce");
            break;
        case 1:
            strcat(numero_txt,"once");
            break;
        case 0:
            strcat(numero_txt,"diez");
            break;
        default:
        break;
        }
    break;
    case 0:
        switch (numero[0])
        {
        case 9:
            strcat(numero_txt,"nueve");
            break;
        case 8:
            strcat(numero_txt,"ocho");
            break;
        case 7:
            strcat(numero_txt,"siete");
            break;
        case 6:
            strcat(numero_txt,"seis");
            break;
        case 5:
            strcat(numero_txt,"cinco");
            break;
        case 4:
            strcat(numero_txt,"cuatro");
            break;
        case 3:
            strcat(numero_txt,"tres");
            break;
        case 2:
            strcat(numero_txt,"dos");
            break;
        case 1:
            strcat(numero_txt,"uno");
            break;
        case 0:
        break;
        default:
        break;
        }
    break;
    default:
    break;
    }

    if( numero[1] > 2 )
    {
        switch (numero[0])
        {
        case 9:
            strcat(numero_txt,"y nueve");
            break;
        case 8:
            strcat(numero_txt,"y ocho");
            break;
        case 7:
            strcat(numero_txt,"y siete");
            break;
        case 6:
            strcat(numero_txt,"y seis");
            break;
        case 5:
            strcat(numero_txt,"y cinco");
            break;
        case 4:
            strcat(numero_txt,"y cuatro");
            break;
        case 3:
            strcat(numero_txt,"y tres");
            break;
        case 2:
            strcat(numero_txt,"y dos");
            break;
        case 1:
            strcat(numero_txt,"y uno");
            break;
        case 0:
            break;
        default:
        break;
        }
    }
}

void convierte_numero_a_texto_hasta_999999(char *numero_txt, int *numero)
{
    convierte_numero_a_texto_hasta_999999_logic(numero_txt, numero);
    if( numero[5] ==0 && numero[4] == 0 && numero[3] == 0 && 
        numero[2] ==0 && numero[1] == 0 && numero [0] == 0 )
        strcpy(numero_txt,"cero");
}

void convierte_numero_a_texto_hasta_99999(char *numero_txt, int *numero)
{
    convierte_numero_a_texto_hasta_99999_logic(numero_txt, numero);
    if( numero[4] == 0 && numero[3] == 0 && numero[2] ==0 && numero[1] == 0 && numero [0] == 0 )
        strcpy(numero_txt,"cero");
}

void convierte_numero_a_texto_hasta_999(char *numero_txt, int *numero)
{
    convierte_numero_a_texto_hasta_999_logic(numero_txt,numero);
    if( numero[3] == 0 && numero[2] ==0 && numero[1] == 0 && numero [0] == 0 )
        strcpy(numero_txt,"cero");
}

void convierte_numero_a_texto_hasta_99(char *numero_txt, int *numero)
{
    convierte_numero_a_texto_hasta_99_logic(numero_txt,numero);
    if( numero[2] ==0 && numero[1] == 0 && numero [0] == 0 )
        strcpy(numero_txt,"cero");
}
