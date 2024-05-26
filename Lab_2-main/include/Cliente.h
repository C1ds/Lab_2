#pragma once
#include <iostream>
#include <string>
using namespace std;

/**
 * @class Clase Cliente
*/
class Cliente {
private:
    string nombre;
    string tipo; // 0=normal 1=tercera edad 2=discapacidad 3=embarazadas
public:
    /**
     * Constructor de la clase Cliente
     * @param string
     * @param string
    */
    Cliente(string nombre, string tipo);

    /**
     * Obtener el tipo de Cliente
    */
    string getTipo();

    /**
     * Obtener el nombre del Cliente
    */
    string getNombre();

    /**
     * Destructor de la Clase Cliente
    */
    ~Cliente();
};
