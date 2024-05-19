#include <iostream>
#include "Producto.h"
#include "Cliente.h"
#include "LectorDeArchivos.h"

int main()
{
    LectorDeArchivos lector;
    lector.leerArchCliente();
    std::cout << "enchiladas" << std::endl;

    return 0;
}
