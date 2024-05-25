#pragma once
#include <iostream>
#include <string>

using namespace std;

/**
 * @class Clase Funciones
*/
class Funciones {
private:

public:
    /**
     * Constructor de la Clase Funciones
    */
    Funciones();
    
    /**
     * Imprime en pantalla el Menu de Usuario
    */
    void imprimirMenu();

    /**
     * Valida que el parametro entregado sea un numero
     * @param string
     * @return int 
    */
    int validarOpcion(string opcion);

    /**
     * Destructor de la Clase Funciones
    */
    ~Funciones();
};

