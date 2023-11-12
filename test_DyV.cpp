#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
  
 
   vector<int> v;
   int b = 0;
   cout<<"Selecciona caso - 1.ordenado ascendente - 2.ordenado descendente - 3.desordenado - 4.salir : ";
    cin>>b;
   while(b != 4)
     {
       switch (b)
		{

		  case 1:// Caso 1: array ordenado ascendentemente
    for (int i = 1; i <= 10; i++)
        v.push_back(i);
    cout << "Posición del 6 en el array ordenado ascendentemente: " << BusquedaBinaria(6, v, 0, v.size() - 1) << endl;
     cout << "Posición del 6 en el array ordenado ascendentemente (INVERSO): " << BusquedaBinaria_INV(6, v, 0, v.size() - 1) << endl;
    break;

    
    case 2:  // Caso 2: array ordenado descendentemente
    for (int i = 10; i >= 1; i--)
        v.push_back(i);
    cout << "Posición del 6 en el array ordenado descendentemente: " << BusquedaBinaria(6, v, 0, v.size() - 1) << endl;
    cout << "Posición del 6 en el array ordenado desdentemente (INVERSO): " << BusquedaBinaria_INV(6, v, 0, v.size() - 1) << endl;
    break;

    
    case 3: // Caso 3: array desordenado
    for (int i = 1; i <= 10; i++)
        v.push_back(rand() % 100 + 1);
    
    cout << "Posición del 6 en el array desordenado: " << QuickSort(6, v, 0, v.size() - 1) << endl;
    break;
    
   
		}
     }
   return 0;
   

}
