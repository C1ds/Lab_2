#include "../include/Bodega.h"
using namespace std;

Bodega::Bodega() {}

bool Bodega::addCategoria(const string& categoria) {
    for (auto& cat : categorias) {
        if (cat.first == categoria) {
            return false;
        }
    }
    categorias.push_back(make_pair(categoria, vector<pair<string, vector<Producto>>>()));
    return true;
}

bool Bodega::addSubCategoria(const string& categoria, const string& subcategoria) {
    for (auto& cat : categorias) {
        if (cat.first == categoria) {
            cat.second.push_back(make_pair(subcategoria, vector<Producto>()));
            return true;
        }
    }
    return false;
}

bool Bodega::addProducto(const string& categoria, const string& subcategoria, Producto producto) {
    for (auto& cat : categorias) {
        if (cat.first == categoria) {
            for (auto& subcat : cat.second) {
                if (subcat.first == subcategoria) {
                    subcat.second.push_back(producto);
                    return true;
                }
            }
        }
    }
    return false;
}

vector<Producto> Bodega::getProductos(const string& categoria, const string& subcategoria) {
    for (auto& cat : categorias) {
        if (cat.first == categoria) {
            for (auto& subcat : cat.second) {
                if (subcat.first == subcategoria) {
                    return subcat.second;
                }
            }
        }
    }
    return vector<Producto>();
}

void Bodega::imprimirCategorias() {
    int i;
    cout << "------Categorias------" << endl;
    for (i = 0; i < categorias.size(); i++) {
        cout << (i+1) << ". " << categorias[i].first << endl;
    }
    if (i == 0) cout << "No existen Categorias" << endl;
}

void Bodega::imprimirSubCategorias(const string& categoria) {
    int i; int j = 0;
    cout << "------SubCategorias-" << categoria << "------" << endl;
    for (i = 0; i < categorias.size(); i++) {
        if (categorias[i].first == categoria) {
            for (j = 0; j < categorias[i].second.size(); j++) {
                cout << (j+1) << ". " << categorias[i].second[j].first << endl;
            }
        }
    }
    if (i == categorias.size()) cout << "No existe la Categoria: " << categoria  << endl;
    else if (j == 0) cout << "No existen SubCategorias en " << categoria << endl;
}

void Bodega::imprimirProductos(const string& categoria, const string& subcategoria) {
    int i = 0; int j = 0; 
    bool found = false;
    for (i = 0; i < categorias.size(); i++) {
        if (categorias[i].first == categoria) {
            for (j = 0; j < categorias[i].second.size(); j++) {
                if (categorias[i].second[j].first == subcategoria) {
                    found = true;
                    break;
                }
            }
            if (found) {break;}
        }
    }
    if (found) {
        cout << "Productos: " << endl;
        for (int x = 0; x < categorias[i].second[j].second.size(); x++) {
            cout << (x+1) << ". " << categorias[i].second[j].second[x].getNombre() << endl;
        }
    }
    else {
        cout << "No se encontraron Productos en " << subcategoria << endl;
    }
}

Bodega::~Bodega() {}