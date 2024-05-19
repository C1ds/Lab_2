#include <iostream>
#include "Producto.h"
using namespace std;
Producto::Producto(string categoria, string subCategoria, int precio, string id){
    this -> categoria = categoria;
    this -> subCategoria = subCategoria;
    this -> precio = precio;
    this -> id = id;
}
