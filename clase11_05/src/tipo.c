#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#include "arr.h"
#include "tipo.h"

/**
 *
 * @return
 */
tipo* tipo_new(void)
{

}
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
