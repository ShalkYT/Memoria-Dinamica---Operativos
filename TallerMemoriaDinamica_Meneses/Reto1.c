/**************************************************************************************
 * Fecha: 21 de Agosto de 2025
 * Autor: Andres Eduardo Meneses Rincon
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *p; // Se crea un puntero 
    char *q; // Se crea otro puntero (Si se asigna a NULL habra un error de core dumped ya que no le asignaremos memoria ni con calloc ni malloc)
    printf("Address of p = %s \n", p); // Se imprime por consola la direccion de memoria del puntero p

    strcpy(p,"Hello, i'm the best in Operating Systems!!!"); // Se copia en p el valor de la string
    printf("%s\n",p); // Se imprime por consola el valor de p
    printf("About to copy \"Goodbye\" to q\n"); // Se anuncia por consola que se va a copiar una string en q
    strcpy(q,"Goodbye"); // Se copia una string en q 
    printf("String copied\n"); // Se anuncia por consola que ya se copio la string en q
    printf("%s\n",q); // Se imprime lo que hay en q

    return 0; // Fin del programa
}
