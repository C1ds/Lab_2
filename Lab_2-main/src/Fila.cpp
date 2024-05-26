#include "../include/Fila.h"

Fila::Fila() {
    int cant = 0;
}

void Fila::addClient(Cliente c) {
    fila.push(c);
}

Cliente Fila::nextClient() {
    if (!fila.empty()) {
        Cliente next = fila.front();
        fila.pop();
        return next;
    } else {
        throw std::out_of_range("No hay clientes en la fila");
    }
}

int Fila::getCant(){
    return cant;}


