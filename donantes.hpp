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








}; //class
}//ed

#endif
