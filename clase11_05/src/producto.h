/*
 Una empresa importadora que comercializa productos textiles, decide registrarlos de la siguiente manera:
·       idProducto (numérico)
·       descripción (alfanumérico)
·       nacionalidad (teniendo en cuenta que cada país tiene su propio Id y descripción con su nombre)
·       tipo (teniendo en cuenta de que este puede tener más características: Id, Marca, Fabrica y tipo de tela.)
·       precio por unidad (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las
 siguientes opciones:
1. ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando
 haya espacio disponible en el array.
 2. BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de
 la lista, dejando espacio disponible para un nuevo producto.
 3. MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá
 modificar el precio o el tipo.
 4. LISTADO Productos.
 5. LISTADO ordenado por precio.
 6. LISTADO ordenado por descripción
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

struct
{
	int idProducto;
	char descripcion[100];
	int idNacionalidad;
	int idTipo;
	float precio;

}typedef producto;



producto* producto_new(void);
producto* producto_newParam(char* descripcion,int idTipo,int idNacionalidad,int idProducto,float precio);
​
int producto_delete(producto* this);
​
int producto_setDescripcion(producto* this, char* descripcion);
char* producto_getDescripcion(producto* this,int* flagError);
int producto_isValidDescripcion(char*);
​
​
int producto_setId(producto* this,int idProducto);
int producto_getId(producto* this,int* flagError);
int isValidId(int);

#endif /* PRODUCTO_H_ */



















