#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int diagonal[3][3],diagonalPri=0,diagonalSec=0;

  for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            cin >> diagonal[i][j];
        }

  }

  for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if (i==j){
                diagonalPri += diagonal[i][j];
            }

            if(i+j==3-1){
                diagonalSec += diagonal[i][j];
            }
        }
  }


  cout << ("Diagonal Principal: ") << diagonalPri << endl << ("Diagonal Sec: ") << diagonalSec << endl;
 
 
  cout << endl << endl;
  return 0;
}