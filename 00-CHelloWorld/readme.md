TP0 - Hello World en C23, compilado y ejecutado con GCC y make.

Compilador usado: GCC (GNU Compiler Collection). Versión 15.2.0
Versión C: C202311 (C23)

Comando para compilar .exe: gcc hello.c -o hello       (-o es la direccion + nombre)
Comando con salida redureccionada: gcc hello.c -o output/output.txt

Como compilar, ejecutar y eliminar usando make de GNU: crear makefile (si no: make: *** No targets specified and no makefile found.  Stop.) 
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


RESULTADO:

usando cmd en el directorio del proyecto, se puede compilar el programa, compilar una version en .txt. El archivo, al ser binario pasado directamente a texto, aparece "This program cannot be run in DOS mode", acompañado de caracteres ilegibles por la incorrecta codificación.
