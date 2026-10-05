#include <iostream>

using namespace std;

int main(){
  cout << "==={Program Mencari Nilai Maximum}===\n";
  // Kamus Data
  int a1, a2, a3;
  int min,max;

  // Input
  cout << "Masukan nilai a1 : "; cin >> a1;

  cout << "Masukan nilai a2 : "; cin >> a2; 

  cout << "Masukan nilai a3 : "; cin >> a3;

  // Proses 
  max = a1;
  if (a2 > max){
    max = a2;
  }
  if (a3 > max){
    max = a3;
  }

  min = a1;
  if (a2 < min){
    min = a2;
  }
  if (a3 < min){
    min = a3;
  }


  // Output
  cout << "Max : " << max << endl;
  cout << "Min : " << min;
  return 0;
}
