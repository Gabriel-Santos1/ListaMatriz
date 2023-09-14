#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int jogo[10], numeros[6]; /*Variáveis*/
  int cont=0;

  for (int i = 0; i < 6; i++)
  {
    cin >> numeros[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cin >> jogo[i];
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      {
        cont++;
      }
    }
  }

  cout << endl <<("Acertos: ") << cont;

  cout << endl
       << endl;
  return 0;
}
