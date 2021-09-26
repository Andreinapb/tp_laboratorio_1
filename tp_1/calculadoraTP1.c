/*
 ============================================================================
 Name        : calculadoraTP1.c
 Author      : Andreina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {

int opcion;
char seguir = 's';
int suma;
int resta;
int multiplicacion;
float division;
int factorialx;
int factorialy;

int x;
int y;

do{
	printf("Calculadora \n\n");
	printf("Bienvenido, seleccione la opcion que desea realizar:\n\n");
	printf("1. Para ingresar el primer operando\n");
	printf("2. Para ingresar el segundo operando\n");
	printf("3. Para realizar todas las operaciones: \n a.suma \n b.resta \n c.multiplicacion \n d.division \n e.factorial\n");
	printf("4. Para ver los resultados de las operaciones\n");
	printf("5. Para salir\n\n");
	scanf("%d", &opcion);

	switch(opcion){
	case 1: x= cargarNumeroEntero("Por favor ingrese el primer operando: ");
	printf("\n\n");
	break;
	case 2: y= cargarNumeroEntero("Por favor ingrese el segundo operando: ");
	printf("\n\n");
	break;
	case 3:
		suma = sumarEnteros(x,y);
		resta = restarEnteros(x,y);
		multiplicacion = multiplicarEnteros(x,y);
		division=dividirEnteros(x,y);
		factorialx= calcularFactorial(x);
		factorialy= calcularFactorial(y);
	break;
	case 4:
		printf("la suma de los dos operandos es %d\n", suma);
		printf("la resta de los dos operandos es %d\n", resta);
		printf("la multiplicacion de los dos operandos es %d\n", multiplicacion);

		if (y != 0 ){
			printf("la division de los numeros es %.2f\n", division);
		}else{
			printf("No se puede dividir entre 0\n");
		}
		printf("la factorial del primer operando es %d\n", factorialx);
		printf("la factorial del segundo operando es %d\n\n",factorialy);
	break;
	case 5: seguir = 'n';
	break;
	default: printf("Ha ingreado una opcion invalida\n\n");
	break;
	}

	getchar();

}while (seguir == 's');
	return EXIT_SUCCESS;
}
