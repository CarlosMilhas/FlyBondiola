#ifndef PASAJERO_H
#define PASAJERO_H

#include "Fecha.h"

class Pasajero {
private:
    int _idPasajero;
    char _dni[15];
    char _nombre[30];
    char _apellido[30];
    char _email[50];
    char _telefono[20];
    Fecha _fechaNacimiento;
    bool _borrar;

public:
    Pasajero();

    int getIdPasajero() const;
    const char* getDni() const;
    const char* getNombre() const;
    const char* getApellido() const;
    const char* getEmail() const;
    const char* getTelefono() const;
    Fecha getFechaNacimiento() const;

    void setDni(const char* valor);
    void setNombre(const char* valor);
    void setApellido(const char* valor);
    void setFechaNacimiento(Fecha valor);

    void cargar();
    void mostrar() const;

    bool escribirDisco(int pos);
    bool leerDisco(int pos);
};

#endif
