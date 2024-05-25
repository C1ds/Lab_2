#pragma once
#include <iostream>
#include <string>
#include <queue>
#include "Cliente.h"
using namespace std;

/**
 * @class Clase Fila
*/
class Fila {
private:
    std::queue<Cliente> fila;
public:
    /**
     * Constructor de la Clase Fila
    */
    Fila();

    /**
     * Agregar Cliente
     * @param Cliente
    */
    void addClient(Cliente c);

    /**
     * Se retira el Cliente actual y se continua con el siguiente
    */
    Cliente nextClient();
};
