#include "procesos.h"

/* Este fichero está completo y no necesita ser modificado */

int main(int argc, char *argv[])
{
    /* Inicializa todos los punteros del array a NULL, que indica que están vacíos */
    struct proceso* procesos[MAX_PROCESOS] = {0};

    anadir_proceso(procesos, 0, 1, "/bin/bash", ESTADO_PREPARADO);
    anadir_proceso(procesos, 1, 2, "/bin/top", ESTADO_EJECUTANDO);
    anadir_proceso(procesos, 2, 3, "/bin/unzip", ESTADO_BLOQUEADO);

    listar_procesos(procesos);

    liberar_procesos(procesos);

    return 0;
}