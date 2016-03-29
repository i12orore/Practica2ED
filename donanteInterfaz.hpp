//DonanteInterfaz
#ifndef __DONANTE_INTERFAZ_HPP__
#define __DONANTE_INTERFAZ_HPP__

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
namespace ed{
class DonanteInterfaz
{
public:
  virtual string getNombre()const =0;
  virtual string getApellidos()const =0;
  virtual string getGrupoSanguineo()const = 0;
  virtual string getFactorRH()const =0;

  virtual void setNombre(const string nombre) =0;
  virtual void setApellidos(const string apellidos) =0;
  virtual void setGrupoSanguineo(const string grupoSanguineo) =0;
  virtual void setFactorRH(const string factorRH) =0;
};//class
}//namespace
#endif
