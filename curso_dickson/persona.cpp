#include "persona.h"
#include <iostream>

using namespace std;

Persona::Persona(int docid)
{
    doc_identidad = docid;
}
void Persona::Nombre(const string &nombre)
{
    this->nombre = nombre;
}
const string Persona::Nombre() const
{
    return nombre;
}

void Persona::Apellido(const string &apellido)
{
    this->apellido = apellido;
}
const string Persona::Apellido() const
{
    return apellido;
}

void Persona::Doc_identidad(const int &docid)
{
    doc_identidad = docid;
}

const int Persona::Doc_identidad() const
{
    return doc_identidad;
}

Persona::Persona()
{
    doc_identidad = 0;
    nombre = "";
    apellido = "";
}

Persona::~Persona()
{
    cout << "Llamando destructor de Persona" << endl;
}
