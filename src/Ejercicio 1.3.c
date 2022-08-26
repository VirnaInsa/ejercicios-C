/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	int num3;
	int medio=0;

	printf("\nIngrese primer numero:");
	scanf("%d", &num1);

	printf("\nIngrese segundo numero:");
	scanf("%d", &num2);

	printf("\nIngrese tercer numero:");
	scanf("%d", &num3);

	if ((num1 > num2 && num1 < num3)|| (num1 < num2 && num1 > num3)) {
		medio = num1;
		}else if ((num2 > num1 && num2<num3) || (num2 < num1 && num2>num3)) {
			medio = num2;
		}else if ((num3 > num1 && num3<num2) || (num3 < num1 && num3>num2)){
			medio = num3;
		}
		if(medio != 0){
			printf("\n El numero del medio es: %d", medio);
	}else{
			printf("\n El numero medio no existe");
		}
}
