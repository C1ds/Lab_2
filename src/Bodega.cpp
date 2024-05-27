#include "../include/Bodega.h"
#include <iostream>
using namespace std;

Bodega::Bodega() {
    this -> categorias = nullptr;
}

bool Bodega::addCategoria(const string& categoria) {
    Categoria* newCategoria = new Categoria(categoria);
    
    if (categorias == nullptr) {
        categorias = newCategoria;
        return true;
    }

    Categoria* aux = categorias;
    while (aux != nullptr) {
        if (aux->getNombre() == newCategoria->getNombre()) {
            delete newCategoria;
            return false;
        }
        if (aux->getSiguiente() == nullptr) {
            break;
        }
        aux = aux->getSiguiente();
    }
    
    aux->setSiguiente(newCategoria);
    return true;
}

bool Bodega::addSubCategoria(const string& categoria, const string& subcategoria) {
    SubCategoria* newSubcategoria = nullptr;
    Categoria* aux = categorias;
    SubCategoria* aux2 = nullptr;
    
    while (aux != nullptr) {
        if (aux->getNombre() == categoria) {
            newSubcategoria = new SubCategoria(subcategoria);
            if (aux->getSubcategoria() == nullptr) {
                aux->setSubcategoria(newSubcategoria);
                return true;
            }
            aux2 = aux->getSubcategoria();
            
            while (aux2 != nullptr) {
                if (aux2->getNombre() == subcategoria) {
                    delete newSubcategoria;
                    return false;
                }
                if (aux2->getSiguiente() == nullptr) {
                   break;
                }
                aux2 = aux2->getSiguiente();
            }
        }
        aux = aux->getSiguiente();
    }
    aux2->setSiguiente(newSubcategoria);
    return true;
}

bool Bodega::addProducto(const string& categoria, const string& subcategoria, Producto* producto) {
    Categoria* aux = categorias;
    Producto* aux3 = nullptr;

    while (aux != nullptr) {
        if (aux->getNombre() == categoria) {
            SubCategoria* aux2 = aux->getSubcategoria();
            while(aux2 != nullptr) {
                if (aux2->getNombre() == subcategoria) {
                    if (aux2->getProducto() == nullptr) {
                        aux2->setProducto(producto);
                        delete aux3;
                        return true;
                    }
                    aux3 = aux2->getProducto();
                    while (aux3 != nullptr) {
                        if (aux3->getNombre() == producto->getNombre()) {
                            delete aux3;
                            return false;
                        }
                        if (aux3->getSiguiente() == nullptr) {
                            break;
                        }
                        aux3 = aux3->getSiguiente();
                    }
                }
                aux2 = aux2->getSiguiente();
            }
        }
        aux = aux->getSiguiente();
    }
    aux3->setSiguiente(producto);
    return true;
}

void Bodega::imprimirCategorias() {
    int i = 0;
    cout << "------Categorias------" << endl;

    if (categorias == nullptr) {
        cout << "No existen Categorias" << endl;
        return;
    }
    Categoria* aux = categorias;
    while (aux != nullptr) {
        cout << (i+1) << ". " << aux->getNombre() << endl;
        aux = aux->getSiguiente();
        i++;
    }
}

void Bodega::imprimirSubCategorias(const string& categoria) {
    cout << "------SubCategorias-" << categoria << "------" << endl;
    
    if (categorias == nullptr) {
        cout << "No existen Categorias" << endl;
        return;
    }
    Categoria* aux = categorias;
    SubCategoria* aux2 = nullptr;

    while (aux != nullptr) {
        if (aux->getNombre() == categoria) {
            aux2 = aux->getSubcategoria();
            if (aux2 == nullptr) {
               cout << "No existen SubCategorias en " << categoria << endl;
               return;
            }

            int i = 0;
            while (aux2 != nullptr) {
                cout << (i+1) << ". " << aux2->getNombre() << endl;
                aux2 = aux2->getSiguiente();
                i++;
            }
        }
        aux = aux->getSiguiente();
    }

}

void Bodega::imprimirProductos(const string& categoria, const string& subcategoria) {
    if (categorias == nullptr) {
        cout << "No existen Categorias" << endl;
        return;
    }
    cout << "------Productos en " << categoria << " - " << subcategoria << "------" << endl;
    Categoria* aux = categorias;
    SubCategoria* aux2 = nullptr;
    Producto* aux3 = nullptr;

    while (aux != nullptr) {
        if (aux->getNombre() == categoria) {
            aux2 = aux->getSubcategoria();
            while (aux2 != nullptr) {
                if (aux2->getNombre() == subcategoria) {
                    if (aux2->getProducto() == nullptr) {
                        cout << "No se encontraron Productos en " << subcategoria << endl;
                        return;
                    }
                    int i = 0;
                    aux3 = aux2->getProducto();
                    while (aux3 != nullptr) {
                        cout << (i+1) << ". " << aux3->getNombre() << endl;
                        aux3 = aux3->getSiguiente();
                        i++;
                    }
                }
                aux2 = aux2->getSiguiente();
            }
        }
        aux = aux->getSiguiente();
    }  
}

Bodega::~Bodega() {}