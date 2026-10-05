#include <iostream>

using namespace std;

int main(){
  // Kamus Data
  string kelas, tujuan;
  float jml_tiket, harga,  tot_har;

  // Input
  cout << "Masukan Jenis Tiket (Ekonomi / Bisnis) : ";
  cin >> kelas;

  cout << "Tujuan : \n1. Jakarta\n2. Yogyakarta\n3. Solo\nMasukan pilihan anda : ";
  cin >> tujuan;

  cout << "Masukan Jumlah Tiket : "; cin >> jml_tiket;

  // Proses
  if (kelas == "Bisnis"){
    // switch (tujuan) {
    //   case "Jakarta":
    //     harga = 46500;
    //     break;
    //   case "Yogyakarta":
    //     harga = 75000;
    //     break;
    //   case "Solo":
    //     harga = 87500;
    //     break;
    //   default:
    //     cout << "Pastikan Penulisannya Sesuai Dan Tertera!";
    //     break;
    // }
    
    if (tujuan == "Jakarta"){
      harga = 46500;
    }
    if (tujuan == "Yogyakarta"){
      harga =75000;
    }
    if (tujuan == "Solo"){
      harga = 87500;
    }


    if (jml_tiket > 5){
      tot_har += harga * jml_tiket;
    }

    cout << "Tujuan : " << tujuan << endl;
    cout << "Harga/tiket : " << harga << endl;
    cout << "Banyaknya Tiket : " << jml_tiket << endl;
    cout << "Total Harga : " << tot_har;
  }
  return 0;
}
