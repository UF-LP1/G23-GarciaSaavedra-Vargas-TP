#include "cCarrito.h"

cCarrito::cCarrito(const string idcarrito, int contproductos, double preciototal):Idcarrito(idcarrito)
{
	this->Contproductos = contproductos;
	this->Preciototal = preciototal;

}

cCarrito::cCarrito()
{
	this->Contproductos = 0;
	this->Preciototal = 0;
}

cCarrito::~cCarrito()
{
}

void cCarrito::AgregarProducto(cArticulos)
{
}
