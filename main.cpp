//main

#include "donante.hpp"
#include "donanteInterfaz.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace ed;
int main(){
  int opcion=0;
  Donante d,d3;
  bool iguales,menor;
  Donante d2(d);
  do{
    cout<<"\nMenu\n";
    cout<<"\n----------------------------\n";
    std::cout << "1.- Leer donante" << std::endl;
    std::cout << "2.- Mostrar donante" << std::endl;
    std::cout << "3.- Modificar los datos de un donante" << std::endl;
    std::cout << "4.- Comparar el donante introducido en la opción 1 con el modificado en la opción 3" << std::endl;
    std::cout << "5.- Comprobar que el donante introducido en la opción 1 esta por delante del introducido en la opción 3" << std::endl;
    std::cout << "6.- Salir del programa" << std::endl;
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
      case 4:

          iguales=(d==d3);
          if(iguales)
            std::cout << "Funciona el ==" << std::endl;
          break;
      case 5:
          menor=(d<=d3);
          if(menor)
            std::cout << "Fnciona el <=" << std::endl;
          break;
      case 6:
          return 0;
          break;
      default:
          std::cout << "Error: Introduce correctamente una de las opciones designadas" << std::endl;
          break;
    }




  }while(opcion!=6);
  return 0;
}
