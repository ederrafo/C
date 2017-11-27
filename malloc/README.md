
* Asignacion dinamica de memoria C
* Pertenece a stdlib.h
* Utiliza la biblioteca standar de C : malloc, realloc, calloc y free
* C gestiona la memoria de forma statica, dinamica o automatica.
	- Estaticas se asignan en el codigo ejecutable del programa y perdura durante la ejecucion del software.
	- Automaticas se asignan sobre el stack, acaban cuando se invoca a RETURN
	- Estaticas y Automaticas el tamano de malloc debe ser constante en tiempo de compilacion
	- La utilizacion de tamano fijo es insuficiente si el tamano no se conoce hasta llegar al tiempo de ejecucion (Si los datos se leen desde el usuario o desde un file)
	- Los datos automáticos asignados no persisten en varias llamadas de función, mientras que los datos estáticos persisten durante toda la vida del programa, sean o no necesarios.

* malloc asigna un bloque de memoria en el HEAP*
	- patron:
		1. Asignacion mediante malloc
		2. Uso para almacenar datos.
		3. Desasignacion mediante FREE
	- asigna el número especificado de bytes
	- Toma un argumento la cantidad de memoria para asignar en bytes
	- El programa accede a este bloque mediante el puntero que malloc retorna
	- Cuando ya no se necesita se pasa el puntero a la funcion FREE.
	- malloc asigna la memoria segun el recuento de bytes pero no segun el tipo de datos, todo lo contrario a NEW en C++, pero para esto podemos CASTearlo.
	- El mayor bloque asignable depende de la memoria fisica y la implementacion del SO, se puede usar la constante SIZE_MAX para obtener el valor maximo o size_t 
	


* calloc

* El standar C99 arrays de longitud variable 


realloc	aumenta o disminuye el tamaño del bloque de memoria especificada. Reasigna si es necesario
calloc	asigna el número especificado de bytes y los inicializa a cero(0).
free	libera el bloque de memoria especificada de nuevo al sistema

* void * 