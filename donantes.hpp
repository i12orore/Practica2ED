#ifndef __DONANTES_HPP__
#define __DONANTES_HPP__

#include <cstdlib>
#include <iostream>
#include <list>
#include "donantesInterfaz.hpp"
#include "donante.hpp"
#include "donanteInterfaz.hpp"
#include <string>

using namespace std;

namespace ed{
class Donantes:public ed::DonantesInterfaz
{
private:
  list <Donante> _listaDeDonantes;

public:
  Donantes();

  int capacity(){
    _listaDeDonantes.size();
  }

  int nItems(){
    for (int i = 0; i < capacity(); i++) {
      if(_listaDeDonantes[i].getFactorRH()=="Por Defecto")
        return i-1;
    }
  }

  bool isFull(){
    if(capacity()==nItems())
  }

  bool isEmpty(const list <Donante> l);
  Donante setBuscarDonante(const list <Donante> l);

  void insertFirst(Donante d){
    if()


  }
  void deleteFirst();









}; //class
}//ed

#endif
