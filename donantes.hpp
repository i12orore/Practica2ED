//donantes.hpp
#include <iostream>
#include <stdlib.h>
#include "donante.hpp"
#include <cstring>
using namespace std;

namespace ed{

struct nodo{
       Donante nro;        // en este caso es un numero entero
       struct nodo *sgte;
};

typedef struct nodo *Tlista;
/*!
  \brief Inserta un Donante al inicio
  \pre Hay que introducir la lista y el valor de Donante que se va a introducir
  \post Ninguna
*/
void insertarInicio(Tlista &lista, Donante valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}
/*!
  \brief Inserta al final
  \pre Hay que introducir la lista y el valor de Donante que se va a introducir
  \post Ninguna
*/
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
/*!
  \brief Para ver sin introducir delante o detras de X Donante.
  \return devuelve la posición donde se va a introducir
  \post Ninguna
*/
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
/*!
  \brief Inserta en una posición exacta
  \pre Se le pasa la lista, el valor del DOnante y la posicion donde se va a insertar.
  \post Ninguna
*/
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
/*!
  \brief Busca un elemnto por su nombre
  \pre Que exista una lista y se le pase un valor para comparar
  \post Ninguna
*/
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
/*!
  \brief busca un donante por su apellido
  \pre Una lista y el valor del apellido
  \post Ninguna
*/
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
/*!
  \brief Devuelve la lista
  \pre Que exista una lista
  \post Ninguna
*/
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

/*!
  \brief Elimina un elemento de una lista
  \pre Una lista y un valor de Donante
  \post Ninguna
*/
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
/*!
  \brief Elimina los repetidos
  \pre Necesita una lista y un valor para donante
*/
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
/*!
  \brief Menu para el programa
*/
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
}

/*                        Funcion Principal
---------------------------------------------------------------------*/
