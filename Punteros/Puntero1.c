/*
Fecha:
Nombre:
Tema:
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

	int variable = 123;
	int *ptr = &variable;
	printf("Valor de la variable %d \n", variable);
	printf("Direccion de memoria de la variable %p \n", &variable);
	printf("Direccion a la que apunta el puntero %p \n", (void *)ptr);
	printf("VAlor de la variable a la que apunte el puntero %d \n", *ptr);
	
	ptr = NULL;	

return 0;

}
