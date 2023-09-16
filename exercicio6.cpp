#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int quadrado[3][3], coluna[3] = {0, 0, 0}, linha[3] = {0, 0, 0}, diagonalPri = 0, diagonalSec = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> quadrado[i][j];
            linha[i] += quadrado[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diagonalPri += quadrado[i][j];
            }

            if (i + j == 2)
            {
                diagonalSec += quadrado[i][j];
            }
        }
    }

    coluna[1] += coluna[2] + coluna[3];
    linha[0] += linha[1] + linha[2];

    linha[0] /= 3;

    cout << (diagonalPri) << " Pri" << endl;
    cout << (diagonalSec) << " Sec" << endl;
    cout << (linha[0]) << " Sec" << endl;

    if (diagonalPri == diagonalSec == linha[0])
    {
        cout << ("Sim");
    }

    else
    {
        cout << ("Não");
    }

    cout << endl
         << endl;
    return 0;
}