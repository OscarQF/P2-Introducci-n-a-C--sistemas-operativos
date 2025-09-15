# Variables
CC = cc

# No funcionó en Minix. $< $@

all: cadena punteros array_puntero dinamica puntero_funcion entrada_salida

cadena: cadena.c
	$(CC) -o cadena cadena.c

punteros: punteros.c
	$(CC) -o punteros punteros.c

array_puntero: array_puntero.c
	$(CC) -o array_puntero array_puntero.c

dinamica: dinamica.c
	$(CC) -o dinamica dinamica.c

puntero_funcion: puntero_funcion.c
	$(CC) -o puntero_funcion puntero_funcion.c

entrada_salida: entrada_salida.c
	$(CC) -o entrada_salida entrada_salida.c

# Limpieza
clean:
	rm -f cadena punteros array_puntero dinamica puntero_funcion entrada_salida

# Ojo con el final de fichero. Make requiere que haya una línea en blanco al final del fichero.
