#include <iostream>
#include <string>

using namespace std;

int main (){
  int banyakJenis, i, j, jumlahBayar;
  
  cout << "Gerobak Fried Chicken" << endl;
  cout << "---------------------" << endl;
  cout << "Kode\tJenis\tHarga" << endl;
  cout << "----------------------" << endl;
  cout << "D\tDada\tRp. 2500" << endl;
  cout << "P\tPaha\tRp. 2000" << endl;
  cout << "S\tSayap\tRp. 1500" << endl << endl;

  cout << "Banyak Jenis: "; cin >> banyakJenis; cout << endl;
  
  string keranjang[banyakJenis][4];
  
  for(i=0; i<banyakJenis; i++){
    cout << "Jenis Ke - "<< i + 1 << endl;
    for(j=0; j<1; j++){
      cout << "Jenis Potong [D/P/S]: "; cin >> keranjang[i][0];
      cout << "Banyak Potong: "; cin >> keranjang[i][1];
      if(keranjang[i][0] == "D"){
        keranjang[i][2] = "2500";
      }
      else if(keranjang[i][0] == "p"){
        keranjang[i][2] = "2000";
      }
      else{
        keranjang[i][2] = "1500";
      }
      keranjang[i][3] = to_string(stoi(keranjang[i][2]) * stoi(keranjang[i][1]));
      jumlahBayar += stoi(keranjang[i][2]) * stoi(keranjang[i][1]);
    }
    cout << endl;
  }
  
  cout << "\t\t\t GEROBAK FRIED CHICKEN" << endl;
  cout << "---------------------------------------------------" << endl;
  cout << "No.\tJenis\t\tMarge\t\tBanyak\t\tJumlah" << endl;
  cout << "\tPotong\t\tSatuan\t\tBeli\t\tMarge" << endl;
  cout << "---------------------------------------------------" << endl;
  
  for(i=0; i<banyakJenis; i++){
    cout << i + 1 << "\t" << keranjang[i][0] << "\t\t" << keranjang[i][2] << "\t\t" << keranjang[i][1] << "\t\tRp. " << keranjang[i][3];
    cout << endl;
  }
  
  cout << "--------------------------------------------------" << endl;
  cout << "\t\t\t\t\tJumlah Bayar\tRp. " << jumlahBayar << endl;
  cout << "\t\t\t\t\tPajak 10%\tRp. " << 10 * jumlahBayar / 100 << endl;
  cout << "\t\t\t\t\tTotal Bayar\tRp. " << jumlahBayar + (10 * jumlahBayar / 100);
}
