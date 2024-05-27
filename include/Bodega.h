#pragma once
#include <string>
#include "Producto.h"
using namespace std;

/**
 * @class Clase Bodega
*/
class Bodega {
    private:
        Categoria* categorias;
    public:
        /**
         * Constructor de la clase Bodega
        */
        Bodega();

        /**
         * Agrega una Categoria
         * @param string& categoria
         * @return bool
        */
        bool addCategoria(const string& categoria);

        /**
         * Agrega una subCategoria a una Categoria
         * @param string& categoria
         * @param string& subcategoria
         * @return bool
        */
        bool addSubCategoria(const string& categoria, const string& subcategoria);

        /**
         * Agrega un Producto a una subCategoria
         * @param string& categoria
         * @param string& subcategoria
         * @param Producto producto
         * @return bool
        */
        bool addProducto(const string& categoria, const string& subcategoria, Producto* producto);
        
        /**
         * Imprime todas las Categorias disponibles
        */
        void imprimirCategorias();

        /**
         * Imprime las SubCategorias disponibles de una Categoria
         * @param string& categoria
        */
        void imprimirSubCategorias(const string& categoria);

        /**
         * Imprime los Productos dentro de una SubCategoria
         * @param string& categoria
         * @param string& subcategoria
        */
        void imprimirProductos(const string& categoria, const string& subcategoria);

        /**
         * Destructor de la Clase Bodega
        */
        ~Bodega();

};