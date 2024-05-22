#pragma once
#include <iostream>
using namespace std;

/**
 * @class Clase Producto
*/
class Producto{
    private:
        string* nombre,categoria,subCategoria, id;
        int* precio;
    public:
        /**
         * Constructor de la Clase Producto
         * @param string
         * @param string
         * @param string
         * @param int
         * @param string
        */
        Producto(string* nombre, string* categoria, string* subCategoria, int* precio, string* id);

        /**
         * Destructor de la Clase Producto
        */
        ~Producto() {}
};