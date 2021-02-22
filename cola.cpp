#include "cola.h"
#include "nodo.h"

#include <iostream>

using namespace std;

Cola::Cola()
{
    m_front = nullptr;
    m_back = nullptr;
}

Cola::~Cola()
{
    Nodo *x = nullptr;
    Nodo *y = nullptr;
    x = m_back;
    while (x->siguiente() != nullptr)
    {
        y = x->siguiente();
        delete x;
        x = y;
    }
    delete x;
}

void Cola::encolar(int dato)
{
    if (m_back == nullptr && m_front == nullptr)
    {
        m_back = new Nodo;
        m_back->setDato(dato);
        m_front = m_back;
    }
    else
    {
        Nodo *anterior = new Nodo;
        anterior->setDato(dato);
        m_back->setAnterior(anterior);
        anterior->setSiguiente(m_back);
        m_back = anterior;
    }
}

void Cola::desencolar()
{
    if (!(m_back == nullptr && m_front == nullptr))
    {
        Nodo *anterior = m_front->anterior();
        anterior->setSiguiente(nullptr);
        delete m_front;
        m_front = anterior;
    }
}

void Cola::imprimir() const
{
    Nodo *x = m_front;
    while (x != nullptr)
    {
        cout << x->dato() << endl;
        x = x->anterior();
    }
}

Nodo *Cola::front() const
{
    return m_front;
}

Nodo *Cola::back() const
{
    return m_back;
}
