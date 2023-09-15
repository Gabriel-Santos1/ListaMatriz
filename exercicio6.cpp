#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int quadrado[3][3], coluna[3] = {0, 0, 0}, linha[3] = {0, 0, 0}, diagonalPri[3] = {0, 0, 0}, diagonalSec[3] = {0, 0, 0};

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
            coluna[i] += quadrado[j][i];
        }
    }

            
    
    for (int i = 0; i < 3; i++)
    {   
        cout << coluna[i] << endl;
    }

    cout << endl
         << endl;
    return 0;
}