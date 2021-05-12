#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#include "arr.h"
#include "nacionalidad.h"

/**
 *
 * @return
 */
nacionalidad* nacionalidad_new(void)
{
	return (producto*) malloc(sizeof(producto));
}

/**
 *
 * @param descripcion
 * @param idNacionalidad
 * @return
 */
nacionalidad* nacionalidad_newParam(char* descripcion,int idNacionalidad)
{

}
​
/**
 *
 * @param this
 * @return
 */
int nacionalidad_delete(nacionalidad* this)
{
	int retorno = -1;
	if(this != NULL)
	{
		free(this);
		retorno = 0;
	}
	return retorno;
}
​
/**
 *
 * @param this
 * @param descripcion
 * @return
 */
int nacionalidad_setDescripcion(nacionalidad* this, char* descripcion)
{
	int retorno = -1;
	if(this != NULL && descripcion != NULL)
	{
		strcpy(this->descripcion,descripcion);
		retorno = 0;
	}
	return retorno;
}

/**
 *
 * @param this
 * @param flagError
 * @return
 */
char* nacionalidad_getDescripcion(nacionalidad* this,int* flagError)
{
	*flagError = -1;
	char* auxDescripcion= NULL;
	if(this != NULL && flagError != NULL )
	{
		auxDescripcion = this->descripcion;
		*flagError = 0;
	}
	return auxDescripcion;
}

/**
 *
 * @param
 * @return
 */
/*
int nacionaliad_isValidDescripcion(char*)
{

}
​*/

/**
 *
 * @param this
 * @param idNacionalidad
 * @return
 */
int nacionalidad_setId(nacionalidad* this,int idNacionalidad)
{
	int retorno = -1;
	if(this != NULL)
	{
		this->idNacionalidad = idNacionalidad;
		retorno = 0;
	}
	return retorno;
}

/**
 *
 * @param this
 * @param flagError
 * @return
 */
int nacionalidad_getId(nacionalidad* this,int* flagError)
{
	*flagError = -1;
	int auxId = -1;
	if(this != NULL && flagError != NULL )
	{
		auxId=this->idNacionalidad;
		*flagError = 0;
	}
	return auxId;
}

/**
 *
 * @param
 * @return
 */
/*int nacionalidad_isValidId(int)
{

}
*/




































