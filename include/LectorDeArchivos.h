#include <iostream>
#include "Bodega.h"
#include "ListaDeFilas.h"
using namespace std;

/**
 * @class Clase LectorDeArchivos
*/
class LectorDeArchivos
{
private:
public:
		/**
         * Constructor de la Clase LectorDeArchivos
        */
  LectorDeArchivos ();

		/**
         * Lector de Archivo Productos
        */
  Bodega *leerArchProducto (Bodega * bodega);

		/**
         * Lector de Archivo Clientes
        */
  ListaDeFilas leerArchCliente ();

   ~LectorDeArchivos ();
};
