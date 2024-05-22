#include <iostream>
#include "../include/Producto.h"
using namespace std;

Producto::Producto(string* nombre, string* categoria, string* subCategoria, int* precio, string* id){
    this -> nombre = new string(*nombre);
    this -> categoria = new string(*categoria);
    this -> subCategoria = new string(*subCategoria);
    this -> precio = new string(*precio);
    this -> id = new string(*id);
}

Producto::~Producto() {
    delete nombre;
}