/**************************************************************************************
 * Fecha: 21 de Agosto de 2025
 * Autor: Andres Eduardo Meneses Rincon
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>


int main(){
    int n, i, *ptr = NULL, sum = 0; 
    /*
    Creacion de variables:
    n:  tamaño del arreglo dinamico
    i: variable para iterar el arreglo
    *ptr: apuntador a NULL
    sum: variable para guardar la suma
    */

    printf("Enter number of elements: "); // Impresion por consola para informar la peticion de datos (Tamaño del arreglo)
    scanf("%d", &n); // Funcino para leer el teclado y guaradarlo en n
    ptr = (int *) calloc(n, sizeof(int)); // Asignacion de memoria usando calloc, se tiene en cuenta el tamaño del arreglo con n y el tamaño de los datos con sizeof(int)

    if(ptr == NULL){ // Confirmacion de la asignacion, como el puntero esta definido en un inicio en NULL la confirmacion nos ayudara a saber si se asigno o no)
        printf("¡¡ERROR!! Memory not allocated"); // Mensaje de error
        exit(0); // Retorno de error
    }

    printf("Enter Elements: \n"); // Impresion para notificar peticion de datos
    for(i = 0; i< n;++i){
        scanf("%d",ptr+i); // Funcion para leer los datos y guardarlos en el espacio i del apuntador 
        sum += *(ptr + i); // Suma de los valores introducidos por consola
    }

    printf("Sum = %d",sum); // muestra por pantalla la suma de los valores ingresados
    printf("\n");
    free(ptr); // Liberacion de memoria del arreglo dinamico

    return 0;

}