#include <iostream>
using namespace std;

int tambahkanarray (const int *arr, int ukuran){
  int hasil = 0;
  for (int i=0; i < ukuran; i++){
    hasil += *arr;
    arr++;
    }
    return hasil;
}
int main(){ 
  int ukuran;
  int ukuranarray;
  
  cout << " masukkan ukuran array: ";
  cin >> ukuranarray;
  
  int arrayangka[ukuranarray];
  std:: cout <<"masukkan element array: " << std::endl;
  for (int  i = 0; i<ukuranarray; ++i){
    cout << "element ke- " << i + 1 << ":";
    std ::cin >> arrayangka[i];
  }
  int total = tambahkanarray (arrayangka, ukuranarray);
  std::cout << "hasil penjumlahan array: " << total << std::endl;

}
