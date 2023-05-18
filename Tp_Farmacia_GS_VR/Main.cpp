#include "cFarmacia.h"
#include "cTicket.h"
#include "cArtMedicamento.h"


int main() {
	cTicket miticket();
	cCliente micliente(miticket, "Juan", "45000000", true, Debito, "juan@juan.com", ObraSocial, "pastillas", 10000);
	//se hardcodea osea se pone directo su necesidad (obra social, etc.)

	cArtMedicamento miarticulo("200mg",true,"venta bajo receta",Ibuprofeno);


    //entonces se pasan los precios de cada uno y toda la info

	return 0;
}