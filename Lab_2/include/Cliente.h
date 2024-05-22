#pragma once
#include <iostream>
#include <string>
using namespace std;

/**
 * @class Clase Cliente
*/
class Cliente {
private:
    string* nombre;
    string* tipo; // 0=normal 1=tercera edad 2=discapacidad 3=embarazadas
public:
    /**
     * Constructor de la clase Cliente
     * @param string
     * @param string
    */
    Cliente(string* nombre, string* tipo);

    /**
     * Getters de la Clase
    */
    string getTipo();
    string getNombre();  // Añadido un método para obtener el nombre del cliente

    /**
     * Destructor de la Clase Cliente
    */
    ~Cliente(); {}
};
