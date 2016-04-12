//Donante

/* \par Fichero: Donante.hpp
	Donante representa la clase Donante
*/

#ifndef __DONANTE_HPP__
#define __DONANTE_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include "donanteInterfaz.hpp"
#include <stdio.h>

using namespace std;

//! \attention Se incluye la clase Donante dentro del espacio de nombre ed
namespace ed{
  //! Definición de la clase Donante
class Donante:public ed::DonanteInterfaz
{
//! \name Atributos privados de la clase Donante
private:
  string _nombre;
  string _apellidos;
  string _grupoSanguineo;
  string _factorRH;
  //! \name Métodos públicos de la clase Donante
public:
  //! \name Constructores de la clase Donante

  /*!
    \brief Contructor que crea un Donante a partir de un nombre, unos apellidos, un grupo sanguineo y un factor RH
    \attention Función sobrecargada
    \note Los parámetros tienen valores por defecto
    \param valores Nombre, Apellidos, FactorRH y Grupo Sanguineo
    \param grado int, valor por defecto 0
    \pre Ninguna
    \post Ninguna
    \sa setNombre(), setApellidos(), setFactorRH(), setGrupoSanguineo()
  */
  Donante(){
    _nombre="Por defecto";
    _apellidos="Por defecto";
    _grupoSanguineo="Por defecto";
    _factorRH="Por defecto";
  };//constructor parametrizado
  /*!
    \brief Contructor que crea un Donante a partir de otro Donante pasado por referencia
    \attention Función sobrecargada
    \param p Donante, Donante pasado por referencia
    \pre Ninguna
    \post Ninguna
    \sa setNombre(), setApellidos(), setFactorRH(), setGrupoSanguineo()
  */
  Donante(const Donante &d){
    setNombre(d.getNombre());
    setApellidos(d.getApellidos());
    setFactorRH(d.getFactorRH());
    setGrupoSanguineo(d.getGrupoSanguineo());
  };//constructor de copia
  /*!
    \brief Devuelve el nombre de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getNombre()
  */
  inline string getNombre()const {return _nombre;}
  /*!
    \brief Devuelve los apellidos de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getApellidos()
  */
  inline string getApellidos()const {return _apellidos;}
  /*!
    \brief Devuelve el grupo sanguineo de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrupoSanguineo()
  */
  inline string getGrupoSanguineo()const {return _grupoSanguineo;}
  /*!
    \brief Devuelve el factorRH de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getFactorRH()
  */
  inline string getFactorRH()const {return _factorRH;}
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa setNombre()
  */
  inline void setNombre(string nombre){_nombre=nombre;}
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa setApellidos()
  */
  inline void setApellidos(string apellidos){_apellidos=apellidos;}
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa setGrupoSanguineo()
  */
  inline void setGrupoSanguineo(string grupoSanguineo){_grupoSanguineo=grupoSanguineo;}
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa setFactorRH()
  */
  inline void setFactorRH(string factorRH){_factorRH=factorRH;}
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa leerDonante()
  */
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
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrado()
  */
  inline void escribirDonante()
  {
    std::cout << "Datos del paciente:" << std::endl;
    std::cout << "Nombre: " <<getNombre()<< std::endl;
    std::cout << "Apellidos: " <<getApellidos()<< std::endl;
    std::cout << "Grupo Sanguineo: "<<getGrupoSanguineo() << std::endl;
    std::cout << "FactorRH: "<<getFactorRH() << std::endl;
  }
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrado()
  */
  inline Donante& operator =(const Donante &d1)
		{
		  _nombre=d1._nombre;
		  _apellidos=d1._apellidos;
      _grupoSanguineo=d1._grupoSanguineo;
      _factorRH=d1._factorRH;
		  return * this;
		}
    /*!
      \brief Devuelve el coeficiente de un Donante
      \return Coeficiente de un Donante
      \pre El Donante debe existir anteriormente
      \post Ninguna
      \sa getGrado()
    */
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
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrado()
  */
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

  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrado()
  */
  friend istream & operator >>(istream &i, Donante &d);
  /*!
    \brief Devuelve el coeficiente de un Donante
    \return Coeficiente de un Donante
    \pre El Donante debe existir anteriormente
    \post Ninguna
    \sa getGrado()
  */
  friend ostream & operator <<(ostream &o , const Donante &d);


};//class
}//namespace ed


#endif
