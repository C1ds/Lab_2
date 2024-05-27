#include <iostream>
#include "../include/Producto.h"
using namespace std;

Producto::Producto(const string& nombre, int precio, const string& id, int cantidad) {
    this -> nombre = nombre;
    this -> precio = precio;
    this -> id = id;
    this -> cantidad = cantidad;
    this -> siguiente = nullptr;
}

string Producto::getNombre() {
    return nombre;
}

int Producto::getPrecio() {
    return precio;
}

int Producto::getCantidad() {
    return cantidad;
}

string Producto::getId() {
    return id;
}

Producto* Producto::getSiguiente() {
    return siguiente;
}

bool Producto::setSiguiente(Producto* siguiente) {
    if (this -> siguiente == nullptr) {
        this -> siguiente = siguiente;
        return true;
    }
    else {
        return false;
    }
}

Producto::~Producto() {}

SubCategoria::SubCategoria(const string& nombre) {
    this -> nombre = nombre;
    this -> productos = nullptr;
    this -> siguiente = nullptr;
}

string SubCategoria::getNombre() {
    return nombre;
}

Producto* SubCategoria::getProducto() {
    return productos;
}

bool SubCategoria::setProducto(Producto* producto) {
    if (this -> productos == nullptr) {
        this -> productos = producto;
        return true;
    }
    else {
        return false;
    }
}

SubCategoria* SubCategoria::getSiguiente() {
    return siguiente;
}

bool SubCategoria::setSiguiente(SubCategoria* siguiente) {
    if (this -> siguiente == nullptr) {
        this -> siguiente = siguiente;
        return true;
    }
    else {
        return false;
    }
}

SubCategoria::~SubCategoria() {}

Categoria::Categoria(const string& nombre) {
    this -> nombre = nombre;
    this -> subcategorias = nullptr;
    this -> siguiente = nullptr;
}

string Categoria::getNombre() {
    return nombre;
}

SubCategoria* Categoria::getSubcategoria() {
    return subcategorias;
}

bool Categoria::setSubcategoria(SubCategoria* subcategoria) {
    if (this -> subcategorias == nullptr) {
        this -> subcategorias = subcategoria;
        return true;
    }
    else {
        return false;
    }
}

Categoria* Categoria::getSiguiente() {
    return siguiente;
}

bool Categoria::setSiguiente(Categoria* siguiente) {
    if (this -> siguiente == nullptr) {
        this -> siguiente = siguiente;
        return true;
    }
    else {
        return false;
    }
}

Categoria::~Categoria() {}