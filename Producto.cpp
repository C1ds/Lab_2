#include <iostream>
#include "Producto.h"
using namespace std;
Producto::Producto(string nombre,string categoria, string subCategoria, int precio, string id){
    this -> nombre = nombre;
    this -> categoria = categoria;
    this -> subCategoria = subCategoria;
    this -> precio = precio;
    this -> id = id;
}
