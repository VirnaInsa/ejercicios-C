/*
 ============================================================================
 Name        : tema3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 */

#include <stdio.h>
#include <stdlib.h>
void MostrarNumero(int numero);

int main(void) {
	int numero =6;
	MostrarNumero(numero);



	return EXIT_SUCCESS;
}
void MostrarNumero(int numero){

	printf("El numero entero es: %d", numero);
}
