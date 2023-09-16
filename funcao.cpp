#include <iostream>
#include <windows.h>

using namespace std;

void exercicio1()
{
    int jogo[10], numeros[6]; /*Variáveis*/
    int cont = 0;

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

    cout << endl
         << ("Acertos: ") << cont;
}

void exercicio2()
{
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
}

void exercicio3()
{

    int soma[3][3], aux[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> soma[i][j];
            aux[i] += soma[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {

        cout << ("Linha:") << i << (" ") << aux[i] << endl;
    }

    cout << endl
         << endl;
}

void exercicio4()
{

    int soma[3][3], aux = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> soma[i][j];
            aux += soma[i][j];
        }
        cout << aux << endl;
        aux = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            aux += soma[i][j];
        }
        cout << ("Coluna:") << i << (" ") << aux << endl;
        aux = 0;
    }

    cout << endl
         << endl;
}

void exercicio5()
{
    int diagonal[3][3], diagonalPri = 0, diagonalSec = 0;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cin >> diagonal[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diagonalPri += diagonal[i][j];
            }

            if (i + j == 3 - 1)
            {
                diagonalSec += diagonal[i][j];
            }
        }
    }

    cout << ("Diagonal Principal: ") << diagonalPri << endl
         << ("Diagonal Sec: ") << diagonalSec << endl;

    cout << endl
         << endl;
}

void exercicio6()
{
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
}

void exercicio7()
{
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
}

void menu()
{
    int op;

    do
    {   
        system("pause");
        system("cls");
        cout << "Digite 1 para  Mega sena " << endl;
        cout << "Digite 2 para  Chuva " << endl;
        cout << "Digite 3 para  Somar coluna da matriz " << endl;
        cout << "Digite 4 para  Somar linha da matriz " << endl;
        cout << "Digite 5 para  Somar diagonal " << endl;
        cout << "Digite 6 para  Quadrado Mágico " << endl;
        cout << "Digite 0 para  Sair " << endl;
        cin >> op;

        if (op != 0)
        {
            switch (op)
            {
            case 1:
                exercicio1();
                break;

            case 2:
                exercicio2();
                break;

            case 3:
                exercicio3();
                break;

            case 4:
                exercicio4();
                break;

            case 5:
                exercicio5();
                break;

            case 6:
                exercicio6();
                break;

            case 7:
                exercicio7();
                break;

            default:
                menu();
                break;
            }
        }

        else
        {
            cout << ("Realmente deseja sair? (1 – Sim / 0 - Não)");
            cin >> op;
            if (op == 1)
            {
                op = 0;
            }
            else
            {
                op = 8;
            }
        }
    } while (op != 0);
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    menu();
    cout << endl
         << endl;
    return 0;
}