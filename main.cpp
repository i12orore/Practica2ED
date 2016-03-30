//main

#include "donante.hpp"
#include "donanteInterfaz.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace ed;
int main(){
  int opcion=0;
  Donante d,d2,d3;
  bool iguales;

  do{
    cout<<"\nMenu\n";
    cout<<"\n----------------------------\n";
    std::cout << "1.- Leer donante" << std::endl;
    std::cout << "2.- Mostrar donante" << std::endl;
    std::cout << "3.- Modificar los datos de un donante" << std::endl;
    std::cin >> opcion;
    switch (opcion) {
      case 1:
          d.leerDonante();
          break;
      case 2:
          d.escribirDonante();
          break;
      case 3:
          std::cout << "Donante que se va a modificar:" << std::endl;
          d3.escribirDonante();
          std::cout << "\nIntroducir nuevos datos\n" << std::endl;
          d3.leerDonante();
          std::cout << "Nuevos datos del donante" << std::endl;
          d3.escribirDonante();
          break;
      default:
          std::cout << "Error: Introduce correctamente una de las opciones designadas" << std::endl;
          break;
    }




  }while(opcion!=5);



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
