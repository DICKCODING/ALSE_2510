
#include "estudiante.h"

void Estudiante::agregarNota(const double &nota)
{
}

double Estudiante::promedio()
{
    double promedio = 0.0;
    for (int i = 0; i < notas.size(); i++)
    {
        promedio += notas[i];
    }
}