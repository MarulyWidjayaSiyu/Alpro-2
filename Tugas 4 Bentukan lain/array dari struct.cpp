#include <iostream>
#include <string.h>
using namespace std;
struct mahasiswa
{ char nama[50]; int stambuk; } ;
int main(){

struct mahasiswa mhs[2]; int i;
for(i=0; i<2; i++){ //input data
cout << "Mahasiswa " << i + 1 ;
cout << "\nMasukkan stambuk : " ;
cin >> mhs[i].stambuk;
cout << "Masukkan nama : "; cin >> mhs[i].nama;
} cout << endl;
for(i=0; i<2; i++){ //tampil data

cout << "\nData Mahasiswa ke-" << i + 1;
cout << "\nStambuk : " << mhs[i].stambuk ;
cout << "\nNama : " << mhs[i].nama<<endl ;

}
return 0;

}
