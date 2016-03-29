//main

#include "donante.hpp"
#include "donanteInterfaz.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
  Donante d,d2,d3;
  bool iguales;
  d.leerDonante();
  d2.leerDonante();
  iguales=(d2==d);
  if(iguales)
    std::cout << "Funciona el ==" << std::endl;
  d.escribirDonante();
  d2.escribirDonante();
  d3.escribirDonante();
  return 0;
}
