#include "../include/Cliente.h"
#include "Cliente.h"
using namespace std;

// Constructor Cliente
Cliente::Cliente(string* nombre, string* tipo) {
    this -> nombre = new string(*nombre);
    this -> tipo = new string(*tipo);
}

string Cliente::getTipo() {
    // 0=normal 1=tercera edad 2=discapacidad 3=embarazadas
    return *tipo;
}

string Cliente::getNombre() {
    return *nombre;
}

Cliente::~Cliente(){
    delete nombre;
    delete tipo;
}
