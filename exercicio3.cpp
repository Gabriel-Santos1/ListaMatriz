#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int soma[3][3],aux=0;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> soma[i][j];
      aux+=soma[i][j];
    }
    cout << aux << endl;
    aux=0;
  }
  

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      aux+=soma[i][j];
    }
    cout << ("Coluna:") << i << (" ")<< aux << endl;
    aux=0;
  }
 
  cout << endl << endl;
  return 0;
}