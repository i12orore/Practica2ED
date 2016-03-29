//donante.cpp
#include <iostream>
#include "donante.hpp"
#include "donanteInterfaz.hpp"

using namespace std;
namespace ed{

istream & operator >>(istream &i, Donante &d)
		{
      cout<<"Introduce valores para Nombre, apellidos, grupo sanguineo y factor RH"<<endl;
      i>> d._nombre>> d._apellidos>>d._grupoSanguineo>>d._factorRH;
      i.ignore();
		return i;
		}

ostream & operator <<(ostream &o , const Donante &d)
	{
		o<<"Donante --->"<<endl<<d._nombre<<endl<<d._apellidos<<endl<<d._grupoSanguineo<<endl<<d._factorRH<<endl;
		return o;
	}
}//namespace
