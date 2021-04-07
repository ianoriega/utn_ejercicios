/*
 ============================================================================
 Name        : clase5_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#include "arr.h"

#define LIMITE_EDADES 5

int main(void) {

	int edades[LIMITE_EDADES];
	int flagSwap;
	int i;
	int buffer;

	arr_cargarValoresInt(edades, LIMITE_EDADES);

	printf("\n\nvalores del array:");

	for(i=0; i<LIMITE_EDADES; i++)
	{
		printf("\n%d",edades[i]);
	}

	do
	{
		flagSwap = 0;

		for(i=0; i<LIMITE_EDADES; i++)
		{
			if(edades[i] > edades[i+1])
			{
				buffer = edades[i+1];
				edades[i+1] = edades[i];
				edades[i] = buffer;
				flagSwap = 1;
			}
		}

	}while(flagSwap);


	printf("\n\nvalores ordenados del array: ");
	for(i=0; i<LIMITE_EDADES; i++)
	{
		printf("\n%d",edades[i]);
	}

	return EXIT_SUCCESS;
}














