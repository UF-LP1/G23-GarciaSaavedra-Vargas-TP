/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H

class cCliente {
public: 
    bool EstadoDeAtencion;
    
/**
 * @param string NombreYApellido
 * @param const double Dni
 * @param bool Receta
 * @param eMedioDePago MedioDePago
 * @param const string Mail
 * @param eNecesidad Necesidad
 * @param string ProductoAComprar
 */
void Cliente(void string NombreYApellido, void const double Dni, void bool Receta, void eMedioDePago MedioDePago, void const string Mail, void eNecesidad Necesidad, void string ProductoAComprar);
    
/**
 * @param Codigo
 */
void SeleccionarProducto(void Codigo);
    
void SeleccionarMedioPago();
    
void Pagar();
    
eNecesidad get_necesidad();
    
/**
 * @param cTicket
 */
void RecibirTicket(void cTicket);
protected: 
    
void Cliente();
private: 
    bool Receta;
    string NombreYApellido;
    const string Dni;
    const string Mail;
    eNecesidad Necesidad;
};

#endif //_CCLIENTE_H