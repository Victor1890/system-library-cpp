#include "Pila.h"

Pila::Pila(): _ultimo(NULL){}

bool HayUltimoVictorRosario(Elemento* _ultimo){

    if(_ultimo == NULL) return false;
    
    return true;

}


void Pila::Agregar(Elemento* elementoAgregarVictorRosario)
{
    /* Llenar este método con su implementación de Agregar elemento a la pila */

    if(HayUltimoVictorRosario(_ultimo) == false){
        _ultimo = elementoAgregarVictorRosario;
    }
    else{
        elementoAgregarVictorRosario -> SetSiguiente(_ultimo);
        _ultimo = elementoAgregarVictorRosario;
    }
}


Elemento* Pila::Extraer()
{
    /* Llenar este método con su implementación de Extraer un elemento de la pila */

    if(HayUltimoVictorRosario(_ultimo) == true ){

        Elemento* ultimoElementoVictorRosario = _ultimo;
        _ultimo = _ultimo -> GetSiguiente();

        return ultimoElementoVictorRosario;
    }
    return NULL;
}
