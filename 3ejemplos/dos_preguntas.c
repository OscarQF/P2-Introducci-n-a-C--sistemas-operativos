/* entrada_salida.c */
#include <stdio.h>

/* Esta constante es necesaria para strnlen en Minix */
#define _MINIX

#include <string.h>

#define MAX_LEN 20

static int demasiado_larga(const char cadena[MAX_LEN])
{
    const int lon = strnlen(cadena, MAX_LEN);
    const int larga = !feof(stdin) && (cadena[lon - 1] != '\n');
    if (larga)
    {
        fprintf(stderr, "respuesta demasiado larga\n");

        /* descartar caracteres no leídos */
        while (!feof(stdin) && fgetc(stdin) != '\n')
        {
            /* bucle vacío */
        }
    }
    return larga;
}

static void leer_lin(const char pregunta[], char respuesta[MAX_LEN])
{
    char *err;
    do
    {
        fprintf(stdout, "%s ", pregunta); /* mostrar la pregunta */
        err = fgets(respuesta, MAX_LEN, stdin); /* leer la respuesta */
    } while (err != NULL && demasiado_larga(respuesta));
}

int main(void)
{
    char nombre1[MAX_LEN];
    char nombre2[MAX_LEN];


    leer_lin("Introduce tu nombre1:", nombre1);

    leer_lin("Introduce tu nombre2:", nombre2);
    if(strcmp(nombre1,nombre2)==0)
    {
        return printf("son iguales");
     }else {return printf("no son iguales");}


    

    return 0;
}
