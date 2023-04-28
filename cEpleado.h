/**
 * Project Untitled
 */


#ifndef _CEPLEADO_H
#define _CEPLEADO_H

class cEpleado {
public: 
    
/**
 * @param eTipoDeEmpleado Empleado
 * @param string NombreYApellido
 * @param const string Dni
 * @param time Horario
 */
void cEmpleadoVentas(void eTipoDeEmpleado Empleado, void string NombreYApellido, void const string Dni, void time Horario);
    
/**
 * @param cCliente
 * @param cArticulos
 */
void AtenderCliente(void cCliente, void cArticulos);
    
/**
 * @param cTicket
 */
void DarConsejosYRecomendaciones(void cTicket);
    
/**
 * @param cTicket
 */
void AplicarDescuento(void cTicket);
protected: 
    eTipoDeEmpleado Empleado;
    string NombreYApellido;
    const string Dni;
    time Horario;
    
void cEmpleado();
};

#endif //_CEPLEADO_H