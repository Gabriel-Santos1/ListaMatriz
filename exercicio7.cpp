#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char numero0[5][4] = {{'X', 'X', 'X', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', 'X', 'X', 'X'}};

    char numero1[5][4] = {{' ', ' ', 'X', ' '},
                          {' ', 'X', 'X', ' '},
                          {' ', ' ', 'X', ' '},
                          {' ', ' ', 'X', ' '},
                          {' ', 'X', 'X', 'X'}};

    char numero2[5][4] = {{'X', 'X', 'X', 'X'},
                          {' ', ' ', 'x', ' '},
                          {' ', 'x', ' ', ' '},
                          {' ', ' ', ' ', ' '},
                          {'X', 'X', 'X', 'x'}};

    char numero3[5][4] = {{'X', 'X', 'X', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {'X', 'x', 'x', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {'X', 'X', 'X', 'X'}};

    char numero4[5][4] = {{'X', ' ', ' ', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', 'x', 'x', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {' ', ' ', ' ', 'X'}};

    char numero5[5][4] = {{'X', 'X', 'X', 'X'},
                          {'X', ' ', ' ', ' '},
                          {'X', 'x', 'x', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {'X', 'X', 'X', 'X'}};

    char numero6[5][4] = {{'X', 'X', 'X', 'X'},
                          {'X', ' ', ' ', ' '},
                          {'X', 'x', 'x', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {'X', 'X', 'X', 'X'}};

    char numero7[5][4] = {{'x', 'X', 'X', 'X'},
                          {' ', ' ', ' ', 'x'},
                          {' ', ' ', 'x', ' '},
                          {' ', 'x', ' ', ' '},
                          {'x', ' ', ' ', ' '}};

    char numero8[5][4] = {{'X', 'X', 'X', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', 'x', 'x', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', 'X', 'X', 'X'}};

    char numero9[5][4] = {{'X', 'X', 'X', 'X'},
                          {'X', ' ', ' ', 'X'},
                          {'X', 'x', 'x', 'X'},
                          {' ', ' ', ' ', 'X'},
                          {'x', 'X', 'X', 'X'}};
    int num;
    cin >> num;

    switch (num)
    {
    case 0:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero0[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
        break;

    case 1:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero1[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
        break;

    case 2:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero2[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
        break;

    case 3:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero3[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 4:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero4[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 5:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero5[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 6:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero6[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 7:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero7[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 8:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero8[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 9:

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << numero9[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        break;

    default:
        cout << ("Error 404 -_- ") << endl;
        break;
    }

    cout << endl
         << endl;
    return 0;
}