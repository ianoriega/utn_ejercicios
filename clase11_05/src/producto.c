

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#include "arr.h"
#include "producto.h"

/**
 *
 * @return
 */
producto* producto_new(void)
{
	return (producto*) malloc(sizeof(producto));
}

/**
 *
 * @param descripcion
 * @param idTipo
 * @param idNacionalidad
 * @param idProducto
 * @param precio
 * @return
 */
producto* producto_newParam(char* descripcion,int idTipo,int idNacionalidad,int idProducto,float precio)
{
	producto* auxProducto = producto_new();

	if(auxProducto!=NULL)
	{

		if  ( 	producto_setDescripcion(auxProducto, descripcion) < 0 ||
				empleado_setApellido(auxEmpleado,apellido) < 0 ||
				empleado_setDni(auxEmpleado,dni) < 0 ||
				empleado_setId(auxEmpleado,idEmpleado) < 0 )
		{
	}
}
​
/**
 *
 * @param this
 * @return
 */
int producto_delete(producto* this);
​
/**
 *
 * @param this
 * @param descripcion
 * @return
 */
int producto_setDescripcion(producto* this, char* descripcion);
char* producto_getDescripcion(producto* this,int* flagError);
int isValidDescripcion(char*);
​
​
int producto_setId(producto* this,int idProducto);
int producto_getId(producto* this,int* flagError);
int isValidId(int);
















































