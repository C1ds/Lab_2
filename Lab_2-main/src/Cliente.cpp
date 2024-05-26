#include "../include/Cliente.h"
using namespace std;

Cliente::Cliente(string nombre, string tipo) : nombre(nombre), tipo(tipo) {
    // Constructor
}

string Cliente::getTipo() {
    // 0=normal 1=tercera edad 2=discapacidad 3=embarazadas
    return tipo;
}

string Cliente::getNombre() {
    return nombre;
}

Cliente::~Cliente() {}