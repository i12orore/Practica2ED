/*
* C++ - Listas Enlazadas simples en c++
* Copyright 2014 Martin Cruz Otiniano
*
* Description: Inserta, elimina, busca, reporta
* Site: martincruz.me
*/


#include <iostream>
#include <stdlib.h>
#include "donante.hpp"
#include <cstring>
using namespace std;
using namespace ed;

struct nodo{
       Donante nro;        // en este caso es un numero entero
       struct nodo *sgte;
};

typedef struct nodo *Tlista;

void insertarInicio(Tlista &lista, Donante valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}

void insertarFinal(Tlista &lista, Donante valor)
{
    Tlista t, q = new(struct nodo);

    q->nro  = valor;
    q->sgte = NULL;

    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }

}

int insertarAntesDespues()
{
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;

    cout<<"\n\t Opcion : "; cin>> _op;

    if(_op==1)
        band = -1;
    else
        band = 0;

    return band;
}

void insertarElemento(Tlista &lista, Donante valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;

    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;

        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}

void buscarElemento(Tlista lista, string valor)
{
    Tlista q = lista;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->nro.getNombre()==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }

    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void buscarElementoA(Tlista lista, string valor)
{
    Tlista q = lista;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->nro.getApellidos()==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }

    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}
void reportarLista(Tlista lista)
{
     int i = 0;

     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << endl;
          lista->nro.escribirDonante();
          lista = lista->sgte;
          i++;
     }
}


void eliminarElemento(Tlista &lista, Donante valor)
{
    Tlista p, ant;
    p = lista;

    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;

                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}

void eliminaRepetidos(Tlista &lista, Donante valor)
{
    Tlista q, ant;
    q = lista;
    ant = lista;

    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            if(q==lista) // primero elemento
            {
                lista = lista->sgte;
                delete(q);
                q = lista;
            }
            else
            {
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }
        else
        {
            ant = q;
            q = q->sgte;
        }

    }// fin del while

    cout<<"\n\n Valores eliminados..!"<<endl;
}

void menu1()
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR EN UNA POSICION         "<<endl;
    cout<<" 4. REPORTAR LISTA                   "<<endl;
    cout<<" 5. BUSCAR DONANTE POR NOMBRE        "<<endl;
    cout<<" 6. BUSCAR DONANTE POR APELLIDO      "<<endl;
    cout<<" 7. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 8. ELIMINAR ELEMENTOS CON VALOR 'V' "<<endl;
    cout<<" 9. SALIR                            "<<endl;

    cout<<"\n INGRESE OPCION: ";
}


/*                        Funcion Principal
---------------------------------------------------------------------*/

int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    Donante _dato;  // elemenento a ingresar
    int pos;    // posicion a insertar
    string valorN;


    system("color 0b");

    do
    {
        menu1();  cin>> op;

        switch(op)
        {
            case 1:

                 cout<< "\n NUMERO A INSERTAR: "; _dato.leerDonante();
                 insertarInicio(lista, _dato);
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
