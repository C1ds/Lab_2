#include <iostream>
#include "../include/Producto.h"
#include "../include/Cliente.h"
#include "../include/LectorDeArchivos.h"

int main()
{
    LectorDeArchivos lector;
    lector.leerArchCliente();
    lector.leerArchProducto();
    std::cout << "enchiladas" << std::endl;

    return 0;
}
