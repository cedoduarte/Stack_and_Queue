#ifndef NODO_H
#define NODO_H

class Nodo
{
public:
    explicit Nodo();
    virtual ~Nodo();
    void setDato(int dato);
    void setSiguiente(Nodo *siguiente);
    void setAnterior(Nodo *anterior);
    int dato() const;
    Nodo *siguiente() const;
    Nodo *anterior() const;
private:
    int m_dato;
    Nodo *m_siguiente;
    Nodo *m_anterior;
};

#endif // NODO_H
