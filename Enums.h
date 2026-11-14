#ifndef ENUMS_H
#define ENUMS_H

enum class EstadoAvion
{
    DISPONIBLE = 1,
    EN_VUELO = 2,
    MANTENIMIENTO = 3
};

enum class EstadoVuelo
{
    PROGRAMADO = 1,
    REALIZADO = 2,
    DEMORADO = 3,
    CANCELADO = 4
};

enum class EstadoReserva
{
    PENDIENTE = 1,
    CONFIRMADA = 2,
    CANCELADA = 3
};

enum class ClaseServicio
{
    TURISTA = 1,
    EJECUTIVA = 2
};

#endif