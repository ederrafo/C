#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* creacion array de 10 enteros con alcance automatico  */
	//int array[10];

	/* 1 byte = 8 bits */
	/* asignar espacio para una matriz de 10 elementos de tipo INT */
	int * array = malloc(10 * sizeof(int));
	/* malloc asigna el numero especificado en bytes, aqui total seria */
	/* en este ejemplo array tiene 320 bits*/
	/* malloc devuelve NULL cuando no hay memoria disponible o si hay un error que impidio la asignacion de memoria*/
	
	/* Comprobar que la memoria se asigno*/
	if (NULL == array) {
		printf("No se asigno la memoria\n");
	} else {
		printf("Si se asigno la memoria\n");
	}

	/* Liberar la memoria*/
	free(array);

	/* Nos aseguramos que el puntero ya no se usa */
	array = NULL;

	return 0;
}