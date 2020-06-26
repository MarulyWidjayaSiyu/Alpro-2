#include<iostream>
using namespace std;
int main()
{
	int i,n,sum;
	int j[100];
	cout<<"Jumlah Bilangan = ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>j[i];
	}
	for(i=0;i<n;i++){
		sum=sum+j[i];
	}
	sum=sum-1;
	cout<<"Hasil Penjumlahan = "<<sum;
}
