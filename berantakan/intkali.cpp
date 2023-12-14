#include <iostream>
#include <stdio.h>
using namespace std;

int kali (int a, int b){
  int hasil;
  hasil= a * b;
  return hasil;
}
int main(){
  int hasil, a, b;
  cout << "Masukan Nilai a = ";
  cin >> a;
  cout << "Masukan Nilai B = ";
  cin >> b;
  hasil = kali (a, b);
  cout << "Hasil Perkalian = " << hasil << endl;
  getchar ();
}

