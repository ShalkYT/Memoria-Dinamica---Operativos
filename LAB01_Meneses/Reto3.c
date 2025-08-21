/**************************************************************************************
 * Fecha: 21 de Agosto de 2025
 * Autor: Andres Eduardo Meneses Rincon
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 * Objetivo: Usar correctamente la funcion calloc para asignar memoria dinamica
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(){
    int *ptr = NULL; // Creacion de puntero a enteros apuntando a NULL para ayudar a las confirmaciones
    ptr = (int *)malloc(15 * sizeof(int)); // Asignacion de memoria dinamica a puntero, teniendo en cuenta el cast a enteros para que la asignacion sea correcta
    // el tamaño del array dinamico es de 15

    if(ptr != NULL){ // Si se asigno la memoria correctamente realizar la siguiente información
        *(ptr + 5) = 480; // Al quinto valor del arreglo se le asigna el valor 480
    }

    free(ptr);

    return 0;
}