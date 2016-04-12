//main2.cpp
#ifndef __MAIN2_CPP__
#define __MAIN2_CPP__

#include <iostream>
#include "donante.hpp"
#include "donante.cpp"
#include <cstring>
#include <stdlib.h>
#include "donantes.hpp"

using namespace std;
using namespace ed;


int main(){

    Tlista lista = NULL;
    int op;     // opcion del menu
    Donante _dato;  // elemento a ingresar
    int pos;    // posicion a insertar
    string valorN;


  system("color 0b");

    do
    {
        menu1();
        cin>>op;
        switch(op)
        {
            case 1:

                 cout<< "\n NUMERO A INSERTAR: "; _dato.leerDonante();
                 insertarInicio(lista,_dato);
            break;


            case 2:

                 cout<< "\n NUMERO A INSERTAR: "; _dato.leerDonante();
                 insertarFinal(lista, _dato );
            break;


            case 3:

                 cout<< "\n NUMERO A INSERTAR: ";_dato.leerDonante();
                 cout<< " Posicion : ";       cin>> pos;
                 insertarElemento(lista, _dato, pos);
            break;


            case 4:

                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 reportarLista(lista);
            break;


            case 5:

                 cout<<"\n Valor a buscar: ";
                 cin>>valorN;
                 buscarElemento(lista, valorN);
            break;
            case 6:

                 cout<<"\n Valor a buscar: ";
                 cin>>valorN;
                 buscarElementoA(lista, valorN);
            break;

            case 7:

                cout<<"\n Valor a eliminar: "; _dato.leerDonante();

                eliminarElemento(lista, _dato);
            break;

            case 8:

                cout<<"\n Valor repetido a eliminar: "; _dato.leerDonante();

                eliminaRepetidos(lista, _dato);
            break;


          }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=9);


  system("pause");
   return 0;
}

#endif
