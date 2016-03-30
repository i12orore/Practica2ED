//clase DonantesInterfaz
#ifndef __DONANTES_INTERFAZ_HPP__
#define __DONANTES_INTERFAZ_HPP__

#include <string>
#include <cstdlib>
#include <iostream>
#include "donante.hpp"
#include <list>
using namespace std;
namespace ed{
class DonantesInterfaz
{
public:
  virtual void setComprobarSiHayDonantes(const list <Donante> l) =0;
  virtual Donante setBuscarDonante(const list <Donante> l) =0;

  virtual Donante getIntroducirDonante()const =0;
  virtual Donante getBorrarDonante()const =0;

};
}

#endif
