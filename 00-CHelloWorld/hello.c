#include <stdio.h>

/*

Comando para compilar .exe: gcc hello.c -o output/hello       (-o es la direccion + nombre) 
Comando con salida redureccionada: gcc hello.c -o output/output.txt
Ejecutar .exe: output/hello.exe

Como compilar, ejecutar y eliminar usando make de GNU: crear makefile (si no: make: *** No targets specified and no makefile found. Stop.) 
su contenido:
----------------------------------------------------
all:
	gcc hello.c -o output/hello_world_make
run:
	output/hello_world_make
clean:
	cd output && del /f hello_world_make.exe

----------------------------------------------------

como funciona un MAKEFILE? es una forma de automatizar builds. Puedo parametrizar valores y crear reglas para compilar, ejecutar y limpiar el proyecto
all: regla default, se ejecuta cuando escribo make sin argumentos. En este caso, compila el programa.
run: regla para ejecutar el programa compilado. Se ejecuta con make run.
clean: regla para limpiar los archivos generados por la compilación. Se ejecuta con make

se debe poner en consola dentro de proyecto (mismo directorio que esta el makefile):
make para compilar, make run para ejecutar y make clean para eliminar el .exe generado

*/ 

int main() {
    printf("Hello, World!\nLa version actual de C es: (C%ld)\n", (__STDC_VERSION__));
    printf("La version simplificada de C es: (C%ld)\n", (__STDC_VERSION__/ 100) % 100); // __STDC_VERSION__ = long int. %d int, %ld long int
    getchar(); //Espera a que el usuario presione Enter antes de cerrar la consola
    return 0;
}
