# C 
- En GNU/Linux gcc nos permite compilar programas en C, "gcc" se incluye en todas las distribuciones linux.
- Se puede realizar la compilacion desde comandos o un IDE

Para compilar un programa en C
```
  $ gcc hello-world.c
```
Si no hay errores este comando creara un .exe que x default se llama "a.out", 
```
  $ ./a.out
  Hello world
```
Especificando el nombre del archivo
```
$ gcc hello-world.c -o hello-world
```
Ejecutando :
```
  $ gcc hello-world.c -o hello-world && ./hello-world
```

Otros parametros:
```
  $ gcc hello-world.c -o hello-world -Wall -pedantic & ./hello-world
  "-Wall" nos mostrará todos los avisos que produzca el compilador, no solamente los errores. Los avisos nos indican dónde y/o porqué podría surgir algún error en nuestro programa.
  "-pedantic" nos aporta más información sobre los errores y los avisos mostrados por GCC.
```

void * : puntero nulo
size_t is an unsigned integer type of at least 16 bit (entero sin signo es positivo)
size_t es un tipo de dato, representa el tamano de un obj.
Por ejemplo si tu tienes un 'char var[8]' al hacer un sizeof() de esa variable te devolverá un valor tipo size_t  que será igual a 8.