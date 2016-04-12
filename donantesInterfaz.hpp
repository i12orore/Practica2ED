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
  virtual bool isEmpty(const list <Donante> l) =0;
  virtual Donante setBuscarDonante(const list <Donante> l) =0;

  virtual Donante insertFirst(Donante d)const =0;
  virtual Donante delefe()const =0;

};
}

#endif
