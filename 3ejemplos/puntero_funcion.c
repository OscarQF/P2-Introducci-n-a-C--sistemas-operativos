#include <stdio.h>

/* Definición de la estructura orden */
struct orden {
    const char *argumento;
};

/* Prototipos de las funciones privadas */
static void ejecutar_pwd(const struct orden* orden);
static void ejecutar_cd(const struct orden* orden);
static void ejecutar_jobs(const struct orden* orden);
static void ejecutar_orden_externa(const struct orden* orden);

/* Array constante de punteros a funciones */
#define NUM_FUNCIONES 4
static void (* const ejecutar[NUM_FUNCIONES])(const struct orden* orden) = {
    ejecutar_pwd,
    ejecutar_cd,
    ejecutar_jobs,
    ejecutar_orden_externa
};

/* Implementaciones de las funciones. No son implementaciones reales,
   sino ejemplos para ver que el prcoeso de llamada funciona. */
static void ejecutar_pwd(const struct orden* orden) {
    printf("Ejecutando pwd con argumento: %s\n", orden->argumento);
}

static void ejecutar_cd(const struct orden* orden) {
    printf("Ejecutando cd con argumento: %s\n", orden->argumento);
}

static void ejecutar_jobs(const struct orden* orden) {
    printf("Ejecutando jobs con argumento: %s\n", orden->argumento);
}

static void ejecutar_orden_externa(const struct orden* orden) {
    printf("Ejecutando orden externa con argumento: %s\n", orden->argumento);
}

/* Programa principal de demostración */
int main(void) {
    struct orden actual;

    /* Asignar un valor válido */
    actual.argumento = "/home/user";

    /* Llamada a la función que está en la posición 2 -> ejecutar_jobs */
    ejecutar[2](&actual);

    return 0;
}
