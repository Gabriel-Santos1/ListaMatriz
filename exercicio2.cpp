#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int tamanho; /*Determina o tamanho das 2 Matrizes*/

    cin >> tamanho;

    int local[tamanho][tamanho];
    int aux[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            aux[i][j] = 0;
        }
    }

    /*Responsável por somar as matrizes */

    for (int z = 0; z < 2; z++)
    {
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                cin >> local[i][j];
            }
        }

        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                aux[i][j] = aux[i][j] + local[i][j];
            }
        }
    }

    /*Resposável por imprimir*/

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cout << aux[i][j] << (" ");
        }
        cout << endl;
    }
    cout << endl
         << endl;
    return 0;
}