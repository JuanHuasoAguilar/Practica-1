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
    int B[3][3]; //Declaramos un arreglo de las dimensiones que nos pidieron
    int i, j, n=1;
    printf("Por favor ingrese valores enteros al arreglo\n"); //Solicitamos al usuario ingrese sus valores 
    for(i=0; i<3; i++)
		for(j=0; j<3; j++){
        	printf("\nColumna %d, Elemento %d: ", i+1, j+1);
        	scanf("%d", &B[i][j]);
    	}
    printf("\n\nLas direcciones de memoria de los elementos son:\n");
    for(i=0; i<3; i++)
		for(j=0; j<3; j++){
        	printf("\nLa direccion de memoria para el %d elemento [Fila %d, Columna %d] es: %p", n, i+1, j+1, &B[i][j]); //Con el operador %p y el & obtenemos la direccion de memoria del arreglo 
        	n++;
    	}
    printf("\n\nLa direccion de memoria del arreglo es: %p", &B); //Imprimimos la direccion del arreglo 
    printf("\n");
    
    return 0;
}
