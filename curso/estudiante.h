
#include "persona.h"
#include <vector>

using namespace std;

class Estudiante : public Persona
{
    vector<double> notas;
    int codigo;

public:
    Estudiante(const int &cod);
    Estudiante(const string &nombre, const string &apellido, const int &docid, const int &cod);
    int Codigo();
    void Codigo(const int &cod);
    double Nota(const int &i);
    void agregarNota(const double &nota);
    double promedio();
    friend ostream &operator<<(ostream &os, const Estudiante &e);
};
