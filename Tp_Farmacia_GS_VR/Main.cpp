
#include <iostream>
#include <string>
#include "Headers/cCliente.h"
#include  "Headers/cEmpleado.h"
#include  "Headers/cFarmacia.h"
#include "Main.h"

using namespace std;

int main() {
	cFarmacia mifarmacia;
	cEmpleado miempleado;
	cArticulos misarticulos;
	//eMediosDePago pago;
	cTicket miticket("12345",356.7,Debito);
	cCliente micliente(miticket, "Nicanor", 445566, true, Debito, "nica@gmail", Particular, "pastillas");

	 return 0;
}