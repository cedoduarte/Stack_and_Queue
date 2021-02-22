#include "pila.h"
#include "cola.h"

#include <iostream>

using namespace std;

void ejemploPila()
{
    Pila *pila = new Pila;

    pila->apilar(1);
    pila->apilar(2);
    pila->apilar(3);

    pila->imprimir();

    pila->desapilar();
    cout << endl;
    pila->imprimir();

    delete pila;
}

void ejemploCola()
{
    Cola *cola = new Cola;

    cola->encolar(1);
    cola->encolar(2);
    cola->encolar(3);

    cola->imprimir();

    cola->desencolar();
    cout << endl;
    cola->imprimir();

    delete cola;
}

int main()
{
    cout << "ejemplo de pila" << endl;
    ejemploPila();

    cout << "ejemplo de cola" << endl;
    ejemploCola();
    return 0;
}
