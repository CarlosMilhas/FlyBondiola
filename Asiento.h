#ifndef ASIENTO_H
#define ASIENTO_H

#include "Enums.h"

class Asiento {
private:
    int _idAsiento;
    int _idAvion;
    char _numeroAsiento[4];
    ClaseServicio _clase;
    bool _borrar;

public:
    Asiento();

    int getIdAsiento() const;
    int getIdAvion() const;
    const char* getNumeroAsiento() const;
    ClaseServicio getClase() const;

    void setIdAsiento(int valor);
    void setIdAvion(int valor);
    void setNumeroAsiento(const char* valor);
    void setClase(ClaseServicio valor);

    void cargar();
    void mostrar() const;

    bool escribirDisco(int pos);
    bool leerDisco(int pos);
};

#endif
