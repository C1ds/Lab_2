#pragma once
#include <string>
using namespace std;

/**
 * @class Clase Producto
*/
class Producto {
private:
    string nombre;
    int precio;
    string id;
    int cantidad;
    Producto* siguiente;
public:
    /**
     * Constructor de la Clase Producto
     * @param string& nombre
     * @param int precio
     * @param string& id
     * @param int cantidad
    */
    Producto(const string& nombre, int precio, const string& id, int cantidad);

    /**
     * Obtiene el nombre del Producto
     * @return string
    */
    string getNombre();

    /**
     * Obtiene el precio del Producto
     * @return int
    */
    int getPrecio();

    /**
     * Obtiene el Id del Producto
     * @return string
    */
    string getId();

    /**
     * Obtiene la cantidad del Producto
     * @return int
    */
    int getCantidad();

    /**
     * Obtiene el siguiente Producto
     * @return Producto*
    */
    Producto* getSiguiente();

    /**
     * Agrega al siguiente Producto
     * @param Producto* siguiente
     * @return bool
    */
    bool setSiguiente(Producto* siguiente);

    /**
     * Destructor de la Clase Producto
    */
    ~Producto();
};

class SubCategoria {
private:
    string nombre;
    Producto* productos;
    SubCategoria* siguiente;
public:
    /**
     * Constructor de la Clase SubCategoria
     * @param string& nombre
    */
    SubCategoria(const string& nombre);

    /**
     * Obtiene el nombre de la SubCategoria
     * @return string
    */
    string getNombre();

    /**
     * Obtiene el puntero a productos
     * @return Producto*
    */
    Producto* getProducto();

    bool setProducto(Producto* producto);

    /**
     * Obtiene la siguiente SubCategoria
     * @return SubCategoria*
    */
    SubCategoria* getSiguiente();

    /**
     * Agrega a la siguiente SubCategoria
     * @param SubCategoria* siguiente
     * @return bool
    */
    bool setSiguiente(SubCategoria* siguiente);

    /**
     * Destructor de la Clase SubCategoria
    */
    ~SubCategoria();
};

class Categoria {
private:
    string nombre;
    SubCategoria* subcategorias;
    Categoria* siguiente;
public:
    /**
     * Constructor de la Clase Categoria
     * @param string& nombre
    */
    Categoria(const string& nombre);

    /**
     * Obtiene el nombre de la Categoria
     * @return string
    */
    string getNombre();

    /**
     * Obtiene el puntero a subcategorias
    */
    SubCategoria* getSubcategoria();

    bool setSubcategoria(SubCategoria* subcategoria);

    /**
     * Obtiene la siguiente Categoria
     * @return Categoria*
    */
    Categoria* getSiguiente();

    /**
     * Agrega a la siguiente Categoria
     * @param Categoria* siguiente
     * @return bool
    */
    bool setSiguiente(Categoria* siguiente);

    /**
     * Destructor de la Clase Categoria
    */
   ~Categoria();
};