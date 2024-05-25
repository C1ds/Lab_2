#pragma once
#include <iostream>
using namespace std;

/**
 * @class Clase Producto
*/
class Producto{
    private:
        string nombre, id;
        int precio;
    public:
        /**
         * Constructor de la Clase Producto
         * @param string
         * @param int
         * @param string
        */
        Producto(string nombre, int precio, string id);

        /**
         * Obtiene el nombre del Producto
        */
        string getNombre();

        /**
         * Obtiene el precio del Producto
        */
        int getPrecio();

        /**
         * Obtiene el Id del Producto
        */
        string getId();

        /**
         * Destructor de la Clase Producto
        */
        ~Producto();
};