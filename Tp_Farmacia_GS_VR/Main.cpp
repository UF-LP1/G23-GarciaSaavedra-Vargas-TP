#include "cFarmacia.h"
#include "cTicket.h"
#include "cArtMedicamento.h"


int main() {


	vector<cArticulos> articulos;
	
	cArtMedicamento articulo1("", 500, "Id:1234", 500, "200mg", "venta bajo receta", Ibuprofeno);//COMPLETAR CON LOS ATRIBUTOS DE PADRE
	cArtMedicamento articulo2();
	
	cTicket miticket("123456",1500,Debito);
	cCarrito carrito("id:1234", 1, 2000, articulos);
	cCliente micliente(miticket,"Juan", "45000000", true, Debito, "juan@juan.com", ObraSocial, "pastillas", 10000,carrito);

	//podria hacer un for que vaya ingresando productos en el vector articulos de carrito

	return 0;
}