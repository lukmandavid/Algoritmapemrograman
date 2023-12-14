#include <iostream>
#include <stdio.h>
using namespace std;

int factorial (int n){
  if (n < 1){
    return 1;
  }
  else {
      return n * factorial (n - 1);
  }
}
int combination (int n, int k) {
  if(n < k){
    cout << "error: n harus lebih besar atau sama dengan k." << endl;
    return -1;
  }
  return (factorial (n)) / (factorial (n)) * (factorial (n - k));
}
int main() {
  int n, k;
  cout << "Masukkan Nilai N: "; 
  cin >> n;
  cout << "Masukkan Nilai K: ";
  cin >> k;
  
  cout << "c[" << n << ", " << k << "]= " << combination (n,k) << endl;
  
  return 0;
}
