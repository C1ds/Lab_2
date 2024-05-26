#pragma once
#include <iostream>
#include <string>
#include "Fila.h"
#include "Cliente.h"
using namespace std;

/**
 * @class Clase ListaDeFilas
*/
class ListaDeFilas {
  private:
    Fila fNormal;
    Fila fTerEdad;
    Fila fDiscap;
    Fila fEmbarazada;
    bool primera;
  public:
    /**
    * Constructor de la Clase LectorDeArchivos
    */
    ListaDeFilas(Fila fNormal,Fila fTerEdad,Fila fDiscap,Fila fEmbarazada);
    /**
     * @return fila de cliente normal 
     */
    Fila getfNormal();
    /**
     * @return fila de clientes mayores de edad 
     */
    Fila getfTerEdad();
    /**
     * @return fila de clientes Discapacitados
     */
    Fila getfDiscap();
    /**
     * @return fila de clientes embarazadas 
     */
    Fila getfEmbarazada();
     /**
     * @return Siguiente cliente
     */
    Cliente getNextCliente();
    
};
