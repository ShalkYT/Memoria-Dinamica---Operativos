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
    int *ptr, i, n1, n2;
    /*
    Creacion de variables:
    n1: Primer tamaño del arreglo dinamico
    n2: Segundo tamaño del arreglo dinamico
    i: variable para iterar el arreglo
    *ptr: apuntador a NULL
    */
    printf("Enter size: "); // Notificacion por consola para que el usuario ingrese informacion
    scanf("%d", &n1); // Funcion para leer lo escrito por consola
    ptr = (int *) malloc(n1 * sizeof(int)); // Asignacion de memoria dinamica al puntero ptr teniendo en cuenta el tamaño n1 y el tamaño de un int
    printf("Adresses of previuslu allocated memory:"); // Mensaje por consola para informar sobre que es la informacion que se va a dar
    for(i = 0; i<n1;++i){ // for para recorrer el puntero
        printf("\n\np = %p\n", ptr+i); // Funcion para imprimir la direccion de memoria de todos los espacios del arreglo
    }
    printf("\n Enter the new size: "); // Mensaje por consola para informar que se va a pedir informacino
    scanf("%d", &n2); // Funcion para guardar lo que se escriba por consola en n2

    ptr = realloc(ptr,n2 * sizeof(int)); // Uso de la funcion realloc para ajustar el tamaño del arreglo dinamico, se le da el puntero y el nuevo tamaño que va a tener
    for(i=0; i<n2;++i){ // for para recorrer el arreglo dinamico con su nuevo tamaño
        printf("\n\np = %p\n", ptr+i); // Funcion para imprimir la direccion de memoria de todos los espacios del arreglo
    }

    free(ptr); // Funcion para liberar la memoria asignada

}