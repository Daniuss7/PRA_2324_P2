#include <iostream>
#include <vector>



std::vector<int> Mochila(int N, std::vector<T> &pesos, std::vector<T> beneficios, int M )
{
  //Creación de matriz de columnas M (peso max) y filas N, n elementos.
  int** matriz = new int*[N];
  for(int i=0; i<N; i++)
  {
    matriz[i] = new int[M];
  }

  //Casos:
  //1- Que el número de elementos sea 0, en cuyo caso se pone un 0 en memoria.
  //2- Que Mochila(N,pesos,beneficios,M) != 0, en cuyo caso ya existe un dato almacenado (matriz[N][M] != 0)
  //3- Que no esté, en cuyo caso se invoca a la función que compara.
  if(N == 0)
  {
    matriz[N][M] = 0;
    return std::vector<int>(N, 0);
  }

  if(matriz[N][M] != 0)
  {
    std::vector<int> solucion(N);
    for(int i = 0; i < N; i++)
    {
      solucion[i] = matriz[i][M];
    }
    return solucion;
  }

  else
  {
    for(int i=1; i<=N; i++)
    {
      for(int j=1; j<=M; j++)
      {
        if(pesos[i-1] > j)
        {
          matriz[i][j] = matriz[i-1][j];
        }
        else
        {
          matriz[i][j] = std::max(matriz[i-1][j], matriz[i-1][j-pesos[i-1]] + beneficios[i-1]);
        }
      }
    }

    std::vector<int> solucion(N);
    for(int i = 0; i < N; i++)
    {
      solucion[i] = matriz[i][M];
    }
    return solucion;
  }
}


