#ifndef RESERVA_H
#define RESERVA_H

#include "Enums.h"
#include "FechaHora.h"

class Reserva {
private:
    int _idReserva;
    int _idPasajero;
    int _idVuelo;
    int _idAsiento;
    EstadoReserva _estadoReserva;
    float _precio;
    FechaHora _fechaReserva;
    bool _borrar;

public:
    Reserva();

    int getIdReserva() const;
    int getIdPasajero() const;
    int getIdVuelo() const;
    int getIdAsiento() const;
    EstadoReserva getEstadoReserva() const;
    float getPrecio() const;
    FechaHora getFechaReserva() const;

    void setEstadoReserva(EstadoReserva valor);
    void setPrecio(float valor);

    bool estaActiva() const;
    void cancelar();

    void cargar();
    void mostrar() const;

    bool escribirDisco(int pos);
    bool leerDisco(int pos);
};

#endif
