#include<iostream>
using namespace std;
void jumlah(int *a,int *b,int *jml){
    *jml= *a+*b;
}

int main(){
int i,n,sum=0;
cout<<"Masukkan 2 angka : ";
cin>>&i,&n;
jumlah(&i,&n,&sum);
cout<<"Hasil Penjumlahannya adalah "<<sum;
return 0;
}
