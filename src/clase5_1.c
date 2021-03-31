/*
 * hacer funcion para calcular
 * maximo
 * minimo
 * promedio
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#include "arr.h"

#define CANTIDAD_EDADES 5

int main(void)
{

	int edades[CANTIDAD_EDADES];
	int edadIngresada;
	int i;
	int edadAlta;
	int edadBaja;
	float promedio;

	for(i=0; i<CANTIDAD_EDADES; i++)
	{
		if(utn_getNumero(&edadIngresada, "ingrese una edad\n", "parametro incorrecto\n", 0, 130, 2)==0)
		{
			edades[i] = edadIngresada;
		}

	}

	if(arr_calcularMaximoInt(&edades, CANTIDAD_EDADES, &edadAlta)==0)
	{
		printf("\nla edad mas alta es: %d", edadAlta);
	}

	if(arr_calcularMinimoInt(&edades, CANTIDAD_EDADES, &edadBaja)==0)
	{
		printf("\nla edad mas baja es: %d", edadBaja);
	}

	if(arr_calcularPromedioInt(&edades, CANTIDAD_EDADES, &promedio)==0)
	{
		printf("\nel promedio es: %.2f", promedio);
	}
	return EXIT_SUCCESS;
}
