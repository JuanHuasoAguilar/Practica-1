//04/03/21 9:40
/*Programado por: Garcia Garcia Rafael
Flores Virgilio Gabriela Abigail
Huaso Aguilar Juan Manuel
Aguilar Ramos Enrique Alejandro
Sanchez Salazar Irvin Said
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10];//un arreglo de 10 elementos porque el problema asi nos lo pide
    int i;
    printf("Por favor ingrese valores enteros al arreglo\n\a");//el usuario ingresa 10 elementos, los que el quiera. 
    for(i=0; i<10; i++){
        printf("\nElemento %d: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n\nLas direcciones de memoria de los elementos son:\n");
    for(i=0; i<10; i++){
        printf("\nLa direccion de memoria para el %d elemento [%d] es: %p", i+1, A[i], &A[i]); //Obtenemos la direccion de memoria de cada uno de los elementos de nuestro arreglo con el operador %p y el &
    }
    printf("\n\nLa direccion de memoria del arreglo es: %p\n", &A); //Solicitamos la direccion de memoria de todo el arreglo y nos entrega la misma direccion que la del primer termino
    printf("\n");
    
    return 0;
}
