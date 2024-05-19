#include "Fila.h"

Fila::Fila() {
    // El constructor no necesita hacer nada especial
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
