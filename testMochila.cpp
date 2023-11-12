

int main()
{
  std::vector<int> pesos = {1, 3, 2, 4};
  std::vector<int> beneficios = {10, 20, 15, 20};
  int M = 5;
  int N = 4;

  std::vector<int> solucion = Mochila(N, pesos, beneficios, M);

  for(int i = 0; i < N; i++)
  {
    std::cout << solucion[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
