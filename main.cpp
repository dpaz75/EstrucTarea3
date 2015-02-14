#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    (*mi_mapa) [llave]= valor; // le asignamos un valor al apuntador junto a la llave
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave]; // retorna el campo llave de mi mapa
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> semana;
    semana["lunes"]= 1; // asigna los valores al mapa y su clave
    semana["martes"]= 2;
    semana["miercoles"]= 3;
    semana["jueves"]= 4;
    semana["viernes"]= 5;
    semana["sabado"]= 6;
    semana["domingo"]= 7;

       return semana; // devuelve los valores del mapa



}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int> ::iterator i=mi_set1.begin(); //recorre el primer set desde el principio
    while(i!=mi_set1.end()) //entra al ciclo siempre y cuando no aya llegado al fin
    {
        set<int> ::iterator j=mi_set2.begin(); // recorre el segundo set desde el principio
        while(j!=mi_set2.end()) //entra al ciclo siempre y cuando so aya llegado al fin
        {
            if(*i==*j)// si son iguales los dos set
              mi_set3.insert(*i); // inserta

            j++; //lee el siguiente registro
        }
        i++;//lee el siguiente registro
    }
    return mi_set3;

}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int> ::iterator i=mi_set1.begin(); // recorre mi primer set desde el principio
    while(i!=mi_set1.end()) // entra al ciclo ciempre y cuando no sea el fin de mi set
    {
        mi_set3.insert(*i); // inserta en mi set 3
        i++; //lee el siguiente registro
    }
    set<int> ::iterator j=mi_set2.begin(); // recorre mi segundo set desde el principio
    while(j!=mi_set2.end()) // entra al ciclo ciempre y cuando no sea el fin de mi set
    {
        mi_set3.insert(*j); //inserta en mi set 3
        j++; //lee el siguiente registro
    }
    return mi_set3;

}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> ::iterator i=mi_sub_set.begin(); // recorre mi sub conjunto desde el principio
    int conteo=0; // Variable contador
    while(i!=mi_sub_set.end()) // entra al ciclo siempre y cuando no aya llegado al final
    {
        set<int>::iterator j=mi_set.begin(); // recorre mi set desde el principio
        while(j!=mi_set.end()) // entra al ciclo siempre y cuando no aya llegado al final
        {
            if(*i==*j) // si amnos set son iguales
              conteo++; // cuenta

            j++; // lee el siguiente registro
        }
        if(conteo==mi_sub_set.size())// si ambos set tienen el mismo tamaño
                 return true; // verdadero

        i++; // lee el siguiente registro
    }
    return false; // falso
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
