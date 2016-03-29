//main

#include "donante.hpp"
#include "donanteInterfaz.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace ed;
int main(){
  Donante d,d2,d3;
  bool iguales;
  d.leerDonante();
  d2.leerDonante();
  iguales=(d2==d);
  if(iguales)
    std::cout << "Funciona el ==" << std::endl;
  d.escribirDonante();
  cout<<endl;
  d2.escribirDonante();
  cout<<endl;
  d3.escribirDonante();
  cout<<endl;
  Donante d4(d2);
  d4.escribirDonante();
  return 0;
}
