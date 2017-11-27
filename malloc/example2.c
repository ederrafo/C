/* Utilizar malloc para reservar memoria para un nombre */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char name[20], *pointer_name;
	int length;


	strcpy(name, "Abu Muhammad Al-Sishani");
	length = strlen(name);
	printf("length: %i\n", length);

	pointer_name = malloc( (length + 1) * sizeof( char ) );

	strcpy(pointer_name, name);
	printf("Name: %s\n", pointer_name);

	free(pointer_name);
	printf("\n");

	/******************************/
	char query[23], *pointer_query;
	strcpy(query, "S");
	// int query_length;
	// query_length = strlen(query);
	// printf("Query length: %i\n", query_length);
	char pwpw = 'sdsdsdsdas';


	return 0;



}



