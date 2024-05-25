#include <iostream>
#include "Bodega.h"
using namespace std;

/**
 * @class Clase LectorDeArchivos
*/
class LectorDeArchivos{
    private:
    public:
        /**
         * Constructor de la Clase LectorDeArchivos
        */
        LectorDeArchivos();

        /**
         * Lector de Archivo Productos
        */
        Bodega* leerArchProducto(Bodega* bodega);

        /**
         * Lector de Archivo Clientes
        */
        void leerArchCliente();
        
        ~LectorDeArchivos();
};