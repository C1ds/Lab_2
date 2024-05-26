#include <iostream>
#include "../include/Producto.h"
using namespace std;

Producto::Producto(string nombre, int precio, string id){
    this -> nombre = nombre;
    this -> precio = precio;
    this -> id = id;
}

string Producto::getNombre() {
    return nombre;
}

int Producto::getPrecio() {
    return precio;
}

string Producto::getId() {
    return id;
}

Producto::~Producto() {}