#ifndef VUELO_H
#define VUELO_H

#include "Enums.h"
#include "FechaHora.h"

class Vuelo {
private:
    int _idVuelo;
    char _numeroVuelo[8];
    char _origen[50];
    char _destino[50];
    FechaHora _salida;
    FechaHora _llegada;
    int _idAvion;
    EstadoVuelo _estadoVuelo;
    float _precioBase;
    bool _borrar;

public:
    Vuelo();

    int getIdVuelo() const;
    const char* getNumeroVuelo() const;
    const char* getOrigen() const;
    const char* getDestino() const;
    FechaHora getSalida() const;
    FechaHora getLlegada() const;
    int getIdAvion() const;
    EstadoVuelo getEstadoVuelo() const;
    float getPrecioBase() const;

    void setSalida(FechaHora valor);
    void setLlegada(FechaHora valor);
    void setEstadoVuelo(EstadoVuelo valor);

    int getDuracionEnMinutos() const;
    bool horariosValidos() const;
    bool seSuperponeCon(const Vuelo& otro) const;
    float precioSegunClase(ClaseServicio clase) const;

    void cargar();
    void mostrar() const;

    bool escribirDisco(int pos);
    bool leerDisco(int pos);
};

#endif
