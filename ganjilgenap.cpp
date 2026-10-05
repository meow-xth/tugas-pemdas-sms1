// Membuat sebuah program untuk mendeteksi apakah suatu bilangan tersebut adalah Ganjil atau Genap
#include <iostream>

using namespace std;

int main(){
  cout << "=========Program Check Ganjil Genap==========\n"  ; 
  int input_user;cout << "Masukan angka : "; cin >> input_user; 
  if (input_user % 2 == 0){
    cout << "Ini bilangan Genap";
  }else{
    cout << "Ini bilangan Ganjil";
  }
}
