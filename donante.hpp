//Donante
#ifndef __DONANTE_HPP__
#define __DONANTE_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include "donanteInterfaz.hpp"
#include <stdio.h>

using namespace std;
namespace ed{
class Donante:public ed::DonanteInterfaz
{
private:
  string _nombre;
  string _apellidos;
  string _grupoSanguineo;
  string _factorRH;
public:
  Donante(){
    _nombre="Por defecto";
    _apellidos="Por defecto";
    _grupoSanguineo="Por defecto";
    _factorRH="Por defecto";
  };//constructor parametrizado

  Donante(const Donante &d){
    setNombre(d.getNombre());
    setApellidos(d.getApellidos());
    setFactorRH(d.getFactorRH());
    setGrupoSanguineo(d.getGrupoSanguineo());
  };//constructor de copia

  inline string getNombre()const {return _nombre;}
  inline string getApellidos()const {return _apellidos;}
  inline string getGrupoSanguineo()const {return _grupoSanguineo;}
  inline string getFactorRH()const {return _factorRH;}

  inline void setNombre(string nombre){_nombre=nombre;}
  inline void setApellidos(string apellidos){_apellidos=apellidos;}
  inline void setGrupoSanguineo(string grupoSanguineo){_grupoSanguineo=grupoSanguineo;}
  inline void setFactorRH(string factorRH){_factorRH=factorRH;}

  inline void leerDonante(){
    string grupoSanguineo,nombre,apellidos,factorRH;
    int aux=0;
    std::cout << "Introduce los datos del nuevo donante del hospital" << std::endl;
    std::cout << "Nombre del paciente:" << std::endl;
    getc(stdin);
    getline(cin,nombre);
    std::cout << "Apellidos del paciente:" << std::endl;
    getline(cin,apellidos);
    do{
    std::cout << "Grupo Sanguineo del paciente(valores permitidos: 0,A,B,AB):" << std::endl;
    std::cin >> grupoSanguineo;
    if ((grupoSanguineo=="0")||(grupoSanguineo==" ")||(grupoSanguineo=="A")||(grupoSanguineo=="B")||(grupoSanguineo=="AB")){
      aux=1;
    }
    else{
      std::cout << "Error, vuelvelo a introducir" << std::endl;
    }
    }while(aux==0);
    aux=0;
    do{
    std::cout << "FactorRH del paciente(valores permitidos: Positivo,Negativo):" << std::endl;
    std::cin >> factorRH;
    if ((factorRH=="Positivo")||(factorRH==" ")||(factorRH=="Negativo")){
      aux=1;
    }
    else{
      std::cout << "Error, vuelvelo a introducir" << std::endl;
    }
    }while(aux==0);
    setNombre(nombre);
    setApellidos(apellidos);
    setGrupoSanguineo(grupoSanguineo);
    setFactorRH(factorRH);
  }

  inline void escribirDonante()
  {
    std::cout << "Datos del paciente:" << std::endl;
    std::cout << "Nombre: " <<getNombre()<< std::endl;
    std::cout << "Apellidos: " <<getApellidos()<< std::endl;
    std::cout << "Grupo Sanguineo: "<<getGrupoSanguineo() << std::endl;
    std::cout << "FactorRH: "<<getFactorRH() << std::endl;
  }

  inline Donante& operator =(const Donante &d1)
		{
		  _nombre=d1._nombre;
		  _apellidos=d1._apellidos;
      _grupoSanguineo=d1._grupoSanguineo;
      _factorRH=d1._factorRH;
		  return * this;
		}

  inline bool operator ==(const Donante &d1)
  {
    if(getNombre()==d1.getNombre())
      return true;
    else
      if (getApellidos()==d1.getApellidos()) {
        return true;
      }
      else
        return false;
  }

  inline bool operator <=(const Donante &d1)
  {
    if(getNombre()<=d1.getNombre())
      return true;
    else
      if(getApellidos()<=d1.getApellidos())
      return true;
      else
      return false;
  }


  friend istream & operator >>(istream &i, Donante &d);
  friend ostream & operator <<(ostream &o , const Donante &d);


};//class
}//namespace ed


#endif
