#include <stdio.h>

int main()
{
		int a = 22; //Declaración de variable entera de tipo entero
		int *puntero; //Declaración de variable puntero de tipo entero
		puntero = &a; //Asignación de la dirección memoria de a

	printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n", a, *puntero);
	printf("La direccion de memoria de a es: %p \n", &a);
	printf("La direccion de memoria de *puntero es: %p \n", puntero);
	printf("\n");


	//Variable declaration
	int num = 10;
	//Pointer declaration
	int *p;
	//Assigning address of num to the pointer p
	p = #;
	printf("Address of variable num is: %p", p);


	//char sql[] = "SELECT * FROM products";
	//char *puntero_sql[23];
	//puntero_sql = &sql;
	//printf("El valor de sql es %s\n", sql);
	//printf("El valor de puntero_sql es %c\n", *puntero_sql);

	return 0;
}