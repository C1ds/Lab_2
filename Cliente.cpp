#include "Cliente.h"
using namespace std;

Cliente::Cliente(std::string nombre, string tipo) : nombre(nombre), tipo(tipo) {
    // Constructor
}

std::string Cliente::getTipo() {
    return tipo; // 0normal 1tercera edad 2discapacidad 3embarazadas
}

std::string Cliente::getNombre() {
    return nombre;
}
