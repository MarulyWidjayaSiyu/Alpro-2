#include <iostream>
using namespace std;

struct mahasiswa
{
	char nama[30];
	int kelas;
};

void dataMahasiswa(mahasiswa); //Deklarasi 
void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah);//function prototype
 
int main(){
    int hasilNaik=0, hasilTurun=0, nilai=10;
    mahasiswa m;

    cout << "Nama : ";
     cin >> m.nama;
	cout <<"Kelas : ";
 	cin >> m.kelas;
	dataMahasiswa(m);
 
    naik_turun(hasilNaik, hasilTurun, nilai, 3);
    cout<<"hasilNaik = "<<hasilNaik<<endl;
    cout<<"hasilTurun = "<<hasilTurun<<endl;
 
    return 0;
}

void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah){
    penaikan = nilai + jumlah;
    penurunan = nilai - jumlah;
	}
void dataMahasiswa(mahasiswa m)

{	
	cout << "Nama: " <<m.nama;
        cout << "Kelas: " <<m.kelas;
}
