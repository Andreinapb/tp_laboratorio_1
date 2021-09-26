/*
 * calculos.h
 *
 *  Created on: 19 sep. 2021
 *      Author: andreinaparra
 */

#ifndef __CALCULOS_H_
#define __CALCULOS_H_

/**
 * Esta funcion se encarga de mostrar un mensaje y recibir un dato, devuelve el dato recibido
 * @param recibe un mensaje que se mostrara al usuario para pedir el dato
 * @return el dato ingresado por el usuario
 */
int cargarNumeroEntero (char mensaje[]);

/**
 * Esta funcion se encarga de recibir dos numeros y sumarlos
 * @param a es el primer dato entero
 * @param b es el segundo dato entero
 * @return es la sumatoria de ambos
 */
int sumarEnteros (int a, int b);

/**
 * Esta funcion se encarga de recibir dos numeros y restarlos
 * @param a es el primer dato entero
 * @param b es el segundo dato entero
 * @return es la substraccion de ambos
 */
int restarEnteros (int a,int b);

/**
 * Esta funcion se encarga de recibir dos numeros y multiplicarlos
 * @param a es el primer dato entero
 * @param b es el segundo dato entero
 * @return es la multiplicacion de ambos
 */
int multiplicarEnteros (int a,int b);

/**
 * Esta funcion se encarga de recibir dos numeros y dividirlos
 * @param a es el primer dato entero
 * @param b es el segundo dato entero
 * @return es la division de ambos
 */
float dividirEnteros (int a,int b);

/**
 * Esta funcion se encarga de recibir un numero y calcular su factorial
 * @param a es el dato entero
 * @return es el factorial calculado
 */
int calcularFactorial(int a);

#endif /* __CALCULOS_H_ */
