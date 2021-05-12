/*
 * tipo.h
 *: Id, Marca, Fabrica y tipo de tela.)
 *  Created on: 11 may. 2021
 *      Author: inaki
 */

#ifndef TIPO_H_
#define TIPO_H_

struct
{
	int idTipo;
	char marca[50];
	char fabrica[50];
	char tipoTela[50];
}typedef tipo;

tipo* tipo_new(void);
tipo* tipo_newParam(char* marca,int idTipo, char* fabrica, char* tipoTela);
​
int tipo_delete(tipo* this);
​
int tipo_setMarca(tipo* this, char* marca);
char* tipo_getMarca(tipo* this,int* flagError);
int tipo_isValidmarca(char*);

int tipo_setfabrica(tipo* this, char* fabrica);
char* tipo_getfabrica(tipo* this,int* flagError);
int tipo_isValidfabrica(char*);
​
int tipo_settipoTela(tipo* this, char* tipoTela);
char* tipo_gettipoTela(tipo* this,int* flagError);
int tipo_isValidtipoTela(char*);
​
int tipo_setId(tipo* this,int idTipo);
int tipo_getId(tipo* this,int* flagError);
int tipo_isValidId(int);

#endif /* TIPO_H_ */
