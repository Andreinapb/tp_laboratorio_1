/*
 * calculos.c
 *
 *  Created on: 19 sep. 2021
 *      Author: andreinaparra
 */

#include <stdio.h>
#include "calculos.h"

int cargarNumeroEntero (char mensaje[]){

	    int numeroIngresado;
	    printf("%s", mensaje);
	    fflush(stdin);
	    scanf("%d", &numeroIngresado);
	    return numeroIngresado;

	return numeroIngresado;
}



int sumarEnteros (int a, int b){
	int suma;

	suma= a +b;

	return suma;
}

int restarEnteros (int a, int b){
	int resta;

	resta = a - b;

	return resta;
}


int multiplicarEnteros(int a, int b){

	int multiplicacion;

	multiplicacion= a*b;

	return multiplicacion;
}

float dividirEnteros (int a, int b)
{
	float division;
			division = (float)a/(float)b;
	return division;
}

int calcularFactorial(int a){

 int factorial= 1;

 if(a > 1){

	 for(int i=1; i<= a; i++){
		 factorial *= i;
	 }
 }

	return factorial;
}






