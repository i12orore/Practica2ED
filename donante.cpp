//donante.cpp
#include <iostream>
#include "donante.hpp"
#include "donanteInterfaz.hpp"

using namespace std;
namespace ed{

istream & operator >>(istream &i, Donante &d)
		{
      string grupoSanguineo,nombre,apellidos,factorRH;
      std::cout << "Introduce los datos del nuevo donante del hospital" << std::endl;
      std::cout << "Nombre del paciente:" << std::endl;
      getline(cin,nombre);
      std::cout << "Apellidos del paciente:" << std::endl;
      getline(cin,apellidos);
      std::cout << "Grupo Sanguineo del paciente:" << std::endl;
      std::cin >> grupoSanguineo;
      std::cout << "FactorRH del paciente:" << std::endl;
      std::cin >> factorRH;
      d.setNombre(nombre);
      d.setApellidos(apellidos);
      d.setGrupoSanguineo(grupoSanguineo);
      d.setFactorRH(factorRH);
  //    i>>nombre>>apellidos>grupoSanguineo>>factorRH;
		return i;
		}

		//Funcion <<
//
// ostream & operator <<(ostream &o , const Donante &d)
// 	{
// 		o<<"Donante --->"<<endl<<d.getNombre()<<endl<<d.getApellidos()<<endl<<d.getGrupoSanguineo()<<endl<<d.getFactorRH()<<endl;
// 		return o;
// 	}
}//namespace
