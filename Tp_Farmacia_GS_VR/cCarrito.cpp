#include "cCarrito.h"

cCarrito::cCarrito(const string idcarrito, int contproductos, double preciototal, vector<cArticulos*> articulos):Idcarrito(idcarrito)
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
	for (auto aux = Articulos.begin(); aux != Articulos.end(); ++aux) {
		delete* aux;
	}
	Articulos.clear();
}

vector<cArticulos*> cCarrito::get_VectorArticulos() {
	return Articulos;	
}

void cCarrito::set_articulos(cArticulos* articulos1) //tengo que eliminar este puntero tambien?
{
	this->Articulos.push_back(articulos1);
}

void cCarrito::set_PrecioTotal(double preciototal) {
	this->Preciototal = preciototal;
}

void cCarrito::SumarPrecios() { //metodo que adquiere los precios de los productos del carrito y los suma para tener un total
	double precioaux{};
	for (int i = 0; i < this->Articulos.size(); i++) {
		
		cArticulos auxarticulo1 = *Articulos[i];
	
		precioaux = precioaux + auxarticulo1.get_Precio();
	}
	this->Preciototal = precioaux;
}