#include <iostream>
using namespace std;

void nilai (int *y){
  cout << "alamat parameter  " << y << endl;
  cout << "nilai parameter  " << y << endl;
}
int main(){
  int y = 10;
  cout << "nilai a sebelum panggil fungsi = " << y;  
  cout << "\nalamat memory = " << &y;
  nilai (y);
  cout << "\n\nnilai y sesudah dipanggil fungsi = " << y;
  cout << "\nalamat memory = " << &y;
  
}
