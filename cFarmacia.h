/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H

class cFarmacia {
public: 
    double GananciaTotal;
    
/**
 * @param string Nombre
 * @param string Direccion
 * @param time Horario
 * @param const string Telefono
 * @param bool Estado
 * @param double GananciaTotal
 */
void Farmacia(void string Nombre, void string Direccion, void time Horario, void const string Telefono, void bool Estado, void double GananciaTotal);
    
void EstadoFarmacia();
    
/**
 * @param cArticulos
 */
void ChequearStock(void cArticulos);
    
/**
 * @param cCliente
 * @param cArticulos
 */
void RecibirCliente(void cCliente, void cArticulos);
    
/**
 * @param cCliente
 */
void Cobrar(void cCliente);
protected: 
    
void Farmacia();
private: 
    string Nombre;
    string Direccion;
    time Horario;
    const string Telefono;
    bool Estado;
};

#endif //_CFARMACIA_H