#include <iostream>

using namespace std;

int main(){
  // Kamus Data
  string kelas;
  float jml_tiket, harga,  tot_har, tujuan, diskon;
  bool status_kelas;

  // Input
  cout << "Masukan Jenis Tiket (0 - Ekonomi, 1 - Bisnis) : ";cin >> status_kelas;
  cout << "Masukan Tujuan (1 - Jakarta, 2 - Yogyakarta, 3 - Solo) : ";cin >> tujuan;
  cout << "Masukan Jumlah Tiket : "; cin >> jml_tiket;

  if (status_kelas == 1){
    kelas = "Bisnis";
  }else if(status_kelas == 0) {
    kelas = "Ekonomi";
  }else {
    cout << "Tidak ada pilihan ini!!";
    return 1;
  }

  if (kelas == "Bisnis"){
    if(tujuan == 1)harga=46500;
    if(tujuan == 2)harga=75000;
    if(tujuan == 3)harga=87500;
  }else if (kelas == "Ekonomi"){
    if(tujuan == 1)harga=37000;
    if(tujuan == 2)harga=63000;
    if(tujuan == 3)harga=72500;
  }

  if(kelas == "Bisnis"){
    if (jml_tiket > 5){
      diskon = (jml_tiket * harga) * 0.05; 
      tot_har = jml_tiket * harga - diskon;
    }else{tot_har = jml_tiket * harga;}
  }else if(kelas == "Ekonomi"){tot_har = jml_tiket * harga;}

  cout << "Total harga : " << tot_har;

  return 0;
}
