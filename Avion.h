#ifndef AVION_H
#define AVION_H

#include "Enums.h"

class Avion {
private:
    int _idAvion;
    char _matricula[10];
    char _modelo[30];
    EstadoAvion _estado;
    bool _borrar;

public:
    Avion();

    int getIdAvion() const;
    const char* getMatricula() const;
    const char* getModelo() const;
    EstadoAvion getEstado() const;

    void setIdAvion(int valor);
    void setMatricula(const char* valor);
    void setModelo(const char* valor);
    void setEstado(EstadoAvion valor);

    bool estaDisponible() const;
    void cargar();
    void mostrar() const;

    bool escribirDisco(int pos);
    bool leerDisco(int pos);
};

#endif
