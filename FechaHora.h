#ifndef FECHAHORA_H
#define FECHAHORA_H

#include "Fecha.h"

class FechaHora {
private:
    Fecha _fecha;
    int _hora;
    int _minuto;

public:
    FechaHora();

    Fecha getFecha() const;
    int getHora() const;
    int getMinuto() const;

    bool esValida() const;
    long aMinutos() const;
    bool esAnterior(const FechaHora& otra) const;

    void cargar();
    void mostrar() const;
};

#endif
