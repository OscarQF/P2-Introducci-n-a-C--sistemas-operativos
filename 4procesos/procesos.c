#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "procesos.h"

/* estructura proceso con PID, ejecutable y estado */ 
struct proceso 
{ 
    /**** PRÁCTICA ****/ 
    /* declara un campo entero de nombre zz0000_pid donde zz0000 
       será tu matrícula */
    const int bu0023_pid;
    /* declara un campo de tipo array de caracteres de longitud  
       MAX_EJECUTABLE de nombre zz0000_ejecutable */ 
       char bu0023_ejecutable[MAX_EJECUTABLE];

    /* declara un campo entero de nombre zz0000_estado */
    int bu0023_estado;
}; 

/* función para añadir la información de un proceso al array procesos
   en la posición ix */
int anadir_proceso(struct proceso* procesos[], int ix, int pid,
                   char *ejecutable, int estado)
{
    /**** PRÁCTICA ****/
    /* Declara un puntero a struct proceso */
    struct proceso *puntero
    /* Reserva memoria para guardar la información del nuevo proceso.
       Contempla que puede producirse error en la reserva.
       Devuelve MEM_ERROR
    */
    puntero=malloc(sizeof(struct proceso));
    if(puntero==null){
      return MEM_ERROR;
    }
    
    /* Modifica el valor del pid de la estructura reservada
       dinámicamente accediendo a través del operador '->' */
    puntero->pid=pid;
    /* Utiliza la función strncpy para copiar el parámetro con la ruta del
       ejecutable a la estructura */
    strncpy(puntero->ejecutable,ejecutable,MAX_EJECUTABLE-1);

    /* establece su estado */
    puntero->estado=estado;
    /* Asigna a la posición ix del array de punteros el nuevo registro */
    procesos[ix]=puntero;

    return 0;
}

/* función para listar */
void listar_procesos(struct proceso* procesos[])
{
    /**** PRÁCTICA ****/
    /* Recorre el array de procesos con for, escribiendo con printf los campos
       de cada proceso. Si una posición está vacía, imprimir "Vacía" */
   for(int i=0;i<MAX_PROCESOS;i++){
      if(procesos[i]==null){
         printf("vacio");
      }else{
         printf("pid= %d,ejecutable= %s,estado= %d ",procesos[i]->pid,procesos[i]->ejecutable,procesos[i]->estado);
      }
   }


}

/* función para liberar */
void liberar_procesos(struct proceso* procesos[])
{
    /**** PRÁCTICA ****/
    /* Recorre el array de procesos con for liberando la memoria de cada
       proceso */
   for(int i=0;i<MAX_PROCESOS;i++)

   


}