/*
 * nacionalidad.h
 *
 *  Created on: 11 may. 2021
 *      Author: inaki
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_

struct
{
	int idNacionalidad;
	char descripcion[100];

}typedef nacionalidad;

nacionalidad* nacionalidad_new(void);
nacionalidad* nacionalidad_newParam(char* descripcion,int idNacionalidad);
​
int nacionalidad_delete(nacionalidad* this);
​
int nacionalidad_setDescripcion(nacionalidad* this, char* descripcion);
char* nacionalidad_getDescripcion(nacionalidad* this,int* flagError);
int nacionaliad_isValidDescripcion(char*);

int nacionalidad_setId(nacionalidad* this,int idNacionalidad);
int nacionalidad_getId(nacionalidad* this,int* flagError);
int nacionalidad_isValidId(int);
​


#endif /* NACIONALIDAD_H_ */
