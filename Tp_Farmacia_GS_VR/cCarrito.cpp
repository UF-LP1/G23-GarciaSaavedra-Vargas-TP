#include "cCarrito.h"

cCarrito::cCarrito(const string idcarrito, int contproductos, double preciototal, vector<cArticulos> articulos):Idcarrito(idcarrito)
{
	this->Contproductos = contproductos;
	this->Preciototal = preciototal;
	this->Articulos = articulos;

}

cCarrito::cCarrito()
{
	this->Contproductos = 0;
	this->Preciototal = 0;
}

cCarrito::~cCarrito()
{
// hacer los delete de los vectores
}

vector<cArticulos> cCarrito::get_VectorArticulos() {

	return Articulos;
}

void cCarrito::set_articulos(cArticulos articulos1) {

	Articulos.push_back(articulos1);

}

void cCarrito::set_PrecioTotal(double preciototal) {
	this->Preciototal = preciototal;
}

double SumarPrecios(vector<cArticulos*> articulos) {
	cArticulos auxarticulo1 = *articulos[0];
	auxarticulo1.

}