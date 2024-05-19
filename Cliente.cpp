#include <iostream>
#include "Cliente.h"
#include<string>  
using namespace std;
Cliente::Cliente(string nombre,int tipo){
    this-> nombre=nombre;
    this-> tipo=tipo;
    // 0normal 1tercera edad 2discapacidad 3embarazadas
}
int Cliente::getTipo(){return tipo;} 
