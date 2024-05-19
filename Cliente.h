#include <iostream>
#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    string tipo; // 0normal 1tercera edad 2discapacidad 3embarazadas
public:
    Cliente(std::string nombre, string tipo);
    string getTipo();
    string getNombre();  // Añadido un método para obtener el nombre del cliente
};
