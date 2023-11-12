d#include <iostream>
#include <vector>

template <typename T>

int BusquedaBinaria( T val, std::vector<T> &a, int ini, int fin)
{
  if( ini > fin)
    {
      std::cout<<"No se encuentra el array";
      return -1;
    }
  int medio = (ini/fin)/2;
  if(a[medio] == val)
    {
      return medio;
    }
  else if(a[medio] > val)
    {
      return BusquedaBinaria(val, a, ini, medio-1);
    }
  else
    {
      return BusquedaBinaria(val, a, medio, fin);
    }
}
template <typename T>
int BusquedaBinaria_INV(T val, std::vector<T> &a, int ini, int fin)
{
  //Vectores ordenados de forma descendente

  if(ini > fin)
    {
      std::cout<<"No se encuentra el array";
      return -1;
    }

  int medio = (ini + fin) /2; //Posicion del medio
  if(a[medio] == val)
    {
      return medio;
    }
  else if(a[medio] > val)
    {
      return BusquedaBinaria_INV(val, a, medio+1, fin);
    }
  else
    {
      return BusquedaBinaria_INV(val, a, ini, medio);
    }

}

template <typename T>

int particion(std::vector<T> &a, int inicio, int fin)
{
    int pivote;
    pivote = a[fin];//Modificable para probar casos
    int peque = -1;
    for (int i=inicio;i<fin-1;i++)
    {
        if(a[i] < pivote)
        {
            int aux;
            aux = a[peque+1];
            a[peque+1]= a[i];
            a[i]=aux;
            peque++;
        //Cambiamos el pequeño por el de la posición peque+1
        }
        
    }
    //Cambiamos ahora el pivote por el elemento contiguo al pequeño
    int aux2;
    aux2 = a[peque + 1];
    a[peque + 1] = pivote;
    pivote = aux2;

    return (peque+1); //devuelve la posicion del pivote!!!!
}

template <typename T>

void QuickSort( std::vector<T> &a, int inicio, int fin )
{
    if(inicio < fin)
    {
    int pivote = particion(a, inicio, fin);
    QuickSort(a,pivote+1, fin);
    QuickSort(a, inicio, pivote-1);
    }
    

}
