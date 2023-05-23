#include "cFarmacia.h"
#include "cTicket.h"
#include "cArtMedicamento.h"
#include "cArtOrtopedia.h"
#include "cArtPerfumeria.h"


int main() {

	vector<cArticulos*> vectorart;
	//articulos:
	//cArtMedicamento(string nombredroga, double Precio, const string codigo, double Stock, string Dosis, string IndicacionesEspeciales, eMedicamentos drogas);
	cArtMedicamento articulo1("Ibuprofeno", 500, "Id:1234", 500, "200mg", "venta bajo receta", Ibuprofeno);
	cArtOrtopedia articulo2("Cabestrillo", 200, "0001", 50, false, true, "sin instrucciones", Cabestrillos);

	int cant_productos = vectorart.size();
	vectorart.push_back(&articulo1);
	vectorart.push_back(&articulo2);

	cTicket miticket("123456",1500,Debito);
	cCarrito carrito("id:1234", 1, 2000, vectorart);
	//cFarmacia(cCaja caja, string Nombre, string Direccion, time_t horario, const string telefono, bool estado, double gananciatotal, cAsistenteAutomatico asistente);

	cFarmacia mifarmacia(cCaja micaja, "Farmacia X","juan 2341",);
	cCliente micliente(miticket,"Juan Cruz Mercatante", "45000000", true, Debito, "juan@juan.com", ObraSocial, "pastillas", 10000,carrito);

	
	return 0;
}