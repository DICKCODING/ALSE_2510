
#include "estudiante.h"

void Estudiante::agregarNota(const double &nota)
{
    notas.push_back(nota);
}

double Estudiante::promedio()
{
    double promedio = 0.0;
    for (int i = 0; i < notas.size(); i++)
    {
        promedio += notas[i];
    }
    return promedio / notas.size();
}
Estudiante::Estudiante(const string &nombre, const string &apellido, const int &docid, const int &cod) : Persona(docid)
{
    Nombre(nombre);
    Apellido(apellido);
    Codigo(cod);
    Doc_identidad(docid);
}
ostream &operator<<(ostream &os, const Estudiante &e)
{
    os << "Nombre: " << e.Nombre() << "\n";
    os << "Apellido: " << e.Apellido() << "\n";
    os << "Documento: " << e.Doc_identidad() << "\n";
    os << "Código: " << e.Codigo() << "\n";
    os << "Notas: ";
    for (const auto &nota : e.notas)
    {
        os << nota << " ";
    }
    return os;
}
Estudiante::Estudiante(const int &cod)
{

    cout << "Estudiante: " << Nombre() << " " << Apellido() << " Documento: " << Doc_identidad() << endl;
}

int Estudiante::Codigo() const
{
    return codigo;
}
