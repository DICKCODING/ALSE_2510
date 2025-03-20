
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

  string Nombre() const;
  void Nombre(const string &nombre);
  string Apellido() const;
  void Apellido(const string &apellido);
  int Doc_identidad() const;
  void Doc_identidad(const int &docid);

  ~Persona();
};
