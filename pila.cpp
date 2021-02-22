#include "pila.h"
#include "nodo.h"

#include <iostream>

using namespace std;

Pila::Pila()
{
    m_top = nullptr;
    m_bottom = nullptr;
}

Pila::~Pila()
{
    Nodo *x = nullptr;
    Nodo *y = nullptr;
    x = m_bottom;
    while (x->siguiente() != nullptr)
    {
        y = x->siguiente();
        delete x;
        x = y;
    }
    delete x;
}

void Pila::apilar(int dato)
{
    if (m_bottom == nullptr && m_top == nullptr)
    {
        m_bottom = new Nodo;
        m_bottom->setDato(dato);
        m_top = m_bottom;
    }
    else
    {
        Nodo *siguiente = new Nodo;
        siguiente->setDato(dato);
        m_top->setSiguiente(siguiente);
        siguiente->setAnterior(m_top);
        m_top = siguiente;
    }
}

void Pila::desapilar()
{
    if (!(m_bottom == nullptr && m_top == nullptr))
    {
        Nodo *anterior = m_top->anterior();
        anterior->setSiguiente(nullptr);
        delete m_top;
        m_top = anterior;
    }
}

void Pila::imprimir() const
{
    Nodo *x = m_top;
    while (x != nullptr)
    {
        cout << x->dato() << endl;
        x = x->anterior();
    }
}

Nodo *Pila::top() const
{
    return m_top;
}

Nodo *Pila::bottom() const
{
    return m_bottom;
}
