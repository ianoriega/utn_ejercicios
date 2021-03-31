#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int arr_calcularMaximoInt(int array[], int limite, int* pResultado)
{
	int retorno = -1;
	int i;
	int bufferInt;
	int maximo;

	if(array != NULL && limite > 0 && pResultado != NULL)
	{
		retorno = -2;

		for(i=0; i<limite; i++)
		{
			bufferInt = array[i];

			if(i == 0)
			{
				maximo = bufferInt;
			}
			else if(bufferInt > maximo)
			{
				maximo = bufferInt;
			}
			*pResultado = maximo;
			retorno = 0;
		}
	}

	return retorno;
}


