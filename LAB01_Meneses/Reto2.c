/**************************************************************************************
 * Fecha: 21 de Agosto de 2025
 * Autor: Andres Eduardo Meneses Rincon
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 * Objetivo: asignar memoria de forma dinamica utilizando la funcion de malloc
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>

int main(){

    char *q = NULL; // Declaración de un puntero q que apunta a NULL 
    printf("Requesting space for \"Goodbye\""); // Mensaje por consola de lo que se va a realizar
    q = (char *)malloc(strlen("\"Goodbye\"") + 1); // Asignación de memoria dinamica usando la funcion malloc, se hace un cast porque calloc retorna un void

    if(!q){ // Confirmación de la correcta asinacion de memoria
        perror("Failed to allocate space because"); // Mensaje para detallar el error
        exit(1); // Retornar error que tuvo al asignar memoria
    }

    printf("About to copy \"Goodbye\" to q at address %s\n",q); // Se imprime por consola la informacion sobre la accion a realizar
    strcpy(q,"\"Goodbye\""); // Se copia en q la informacion
    printf("String copied \n"); // Se avisa por consola que se copio la informacion
    printf("%s \n",q); // Se imprime por consola la direccion de q

    free(q);

    return 0;

}