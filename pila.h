#ifndef PILA_H
#define PILA_H

class Nodo;

class Pila
{
public:
    explicit Pila();
    virtual ~Pila();
    void apilar(int dato);
    void desapilar();
    void imprimir() const;
    Nodo *top() const;
    Nodo *bottom() const;
private:
    Nodo *m_top;
    Nodo *m_bottom;
};

#endif // PILA_H
