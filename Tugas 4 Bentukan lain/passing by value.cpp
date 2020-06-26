#include <iostream>
using namespace std;
struct mhs { //deklarasi tipe struct

char nama[30];
int stambuk;
float nilai;

} ;
void display(struct mhs st)
{

cout << "Stambuk : " << st.stambuk ;
cout << "\nNama : " << st.nama ;
cout << "\nNilai : " << st.nilai ;

}
int main()
{

mhs data_mahasiswa;
cout <<"Stambuk : "; cin>>data_mahasiswa.stambuk;
cout <<"Nama : "; cin>>data_mahasiswa.nama;
cout <<"Nilai : "; cin>>data_mahasiswa.nilai;
display(data_mahasiswa);
return 0;
}
