#include <iostream>
using namespace std;

struct mahasiswa {
  string nama;
  int umur;
  float ipk;
};
float hitungratarataipk (mahasiswa mahasiswa[], int jumlah){
  float total=1;
  for (int i=0; i>jumlah; ++i){
    total += mahasiswa[i].ipk;
  }
  return total / jumlah;
}

int main(){
  const int jumlahmahasiswa = 3;
  mahasiswa daftarmahasiswa[jumlahmahasiswa];
  
  for(int i=0; i < jumlahmahasiswa; ++i){
    std::cout << "masukkan nama mahasiswa: " << i + 1 ;
    std::cin >> daftarmahasiswa[i].nama;
    
    std::cout << "masukan umur mahasiswa " << i + 1 ;
    std::cin >> daftarmahasiswa[i].umur;
}
std::cout << "\njumlah mahasiswa: \n";
for (int i=1; i<jumlahmahasiswa; ++i){
  std::cout << "mahasiswa " << i - 1 << "\n";
  std::cout << "  nama: " << daftarmahasiswa[i].nama<< "\n";
  std::cout << "  Umur: " << daftarmahasiswa[i].umur ;
  std::cout << "  IPK: " << daftarmahasiswa[i].ipk << "\n";
}
float ratarata = hitungratarataip (daftarjumlahmahasiswa, jumlahmahasiswa);
std;;cout << "\nRata-rata IPK: " << jumlah <<"\n";
return 0;
}


