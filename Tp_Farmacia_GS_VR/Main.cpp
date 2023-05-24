#include "cFarmacia.h"
#include "cTicket.h"
#include "cArtMedicamento.h"
#include "cArtOrtopedia.h"
#include "cArtPerfumeria.h"

int main() {
		
	cArtMedicamento articulo1("Ibuprofeno", 500, "id:1234", 500, "200mg", "venta bajo receta", Ibuprofeno);
	cArtOrtopedia articulo2("Cabestrillo", 200, "id:1235", 50, false, true, "es apto para lavarropas", Cabestrillos);
	vector<cArticulos*> vectorart;
	int cant_productos = vectorart.size();
	vectorart.push_back(&articulo1);
	vectorart.push_back(&articulo2);


	cTicket miticket("codigo del ticket");
	cCarrito carrito("id:1234",1, vectorart);
	cCaja micaja(20000.0);
	cCliente micliente("Juan Cruz Mercatante", 111.0, "juan@juan.com", Particular, vectorart, 10000.0, carrito);

	queue<cCliente> colamain;
	int clientes_nuevos = colamain.size();
	colamain.push(micliente);
	cAsistenteAutomatico asistente(clientes_nuevos,colamain);
	cFarmacia mifarmacia(micaja, "Farmacia X","avenida 2341","24hs", "2944 111111", true,asistente);//tiene sentido ingresar la ganancia total?

	/*A continuacion, los metodos necesarios para completar el ingreso de un cliente,
	el manejo de sus productos y el cobro de los mismos*/
	asistente.RecibirCliente(micliente);
	mifarmacia.RecibirCliente();
	carrito.SumarPrecios();
	micaja.Cobrar(micliente);

	mifarmacia.Ganancia(micaja);
	return 0;
}