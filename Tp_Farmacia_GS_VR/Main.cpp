#include "cFarmacia.h"
#include "cTicket.h"
#include "cArtMedicamento.h"
#include "cArtOrtopedia.h"
#include "cArtPerfumeria.h"


int main() {

	vector<cArticulos*> vectorart;
	//articulos:
	cArtMedicamento articulo1("", 500, "Id:1234", 500, "200mg", "venta bajo receta", Ibuprofeno);//COMPLETAR CON LOS ATRIBUTOS DE PADRE
	cArtOrtopedia articulo2("Cabestrillo", 200, "0001", 50, false, true, "sin instrucciones", Cabestrillos);

	int cant_productos = 2;
	vectorart.push_back(&articulo1);
	vectorart.push_back(&articulo2);

	cTicket miticket("123456",1500,Debito);
	cCarrito carrito("id:1234", 1, 2000, vectorart);
	cFarmacia mifarmacia();
	cCliente micliente(miticket,"Juan Cruz Mercatante", "45000000", true, Debito, "juan@juan.com", ObraSocial, "pastillas", 10000,carrito);




	//podria hacer un for que vaya ingresando productos en el vector articulos de carrito
	
	return 0;
}