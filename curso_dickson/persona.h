
#include <vector>
#include <string>

using namespace std;

class Persona
{
  string nombre;
  string apellido;
  int doc_identidad;

public:
  Persona();
  Persona(int docid);

  const string Nombre() const;
  void Nombre(const string &nombre);
  const string Apellido() const;
  void Apellido(const string &apellido);
  const int Doc_identidad() const;
  void Doc_identidad(const int &docid);

  ~Persona();
};
