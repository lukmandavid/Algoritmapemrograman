#include <iostream>
#include <iomanip>
  using namespace std;
  int main (){
  
  int matriksA[2][2],
      matriksB[2][2],
      matriksHasil[2][2],
      i, j, k;
  
  cout <<"Program Perkalian Matrix 2x2"<< endl;
  cout <<"============================"<< endl;
  cout << endl;
  
  //Matriks A
  cout << "Input Matriks A    "<< endl;
  cout << "-------------------"<< endl;
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      cout <<"Baris "<< i+1 <<", Kolom "<< j+1 <<" = ";
      cin >> matriksA[i][j];
    }
  }
  cout << endl;
  
  //Matriks B
  cout << "input Matriks B    "<< endl;
  cout << "-------------------"<< endl;
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      cout << "Baris "<< i+1 <<", kolom " << j+1 << " = ";
      cin >> matriksB[i][j];
    }
  }
  cout << endl;
  
  //Tampilan A
  cout << "Matriks A: " << endl;
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      cout << setw(3) << matriksA[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  
  //Tampilan B
  cout<< "Matriks B : "<< endl;
  for(i=0; i < 2; i++){
    for(j = 0; j < 2; j++){
      cout << setw(3) << matriksB[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  
  //proses perhitungan matriks a dan b
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      for(k=0; k<2; k++){
        matriksHasil[i][j] = matriksHasil[i][j] + (matriksA[i][k] * matriksB[k][j]);
      }
    }
  }
  
  //Tampilan hasil
  cout << "Matriks A * Matriks B: "<< endl;
  for(i=0; i<2; i++){
    for(j=0; j<2; j++){
      cout << setw(3) << matriksHasil[i][j] << " ";
    }
    cout << endl;
  }
  }
