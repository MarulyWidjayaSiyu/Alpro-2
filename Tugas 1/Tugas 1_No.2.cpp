#include<iostream>
using namespace std;
int main()
{
	int a,b,c,j;
	int dus[3][3]={(2,4,6),(8,10,12),(14,16,18)};
	cout<<"Jumlah Dus = 9"<<endl;
	cout<<"Nomor Dus = ";
	for(a=0;a<9;a++){
		cout<<(a+1)*2<<" ";
	}
	cout<<endl;
	b=1;
	for(a=0;a<3;a++){
		c=(a+1)*2;
		dus[a][0]=c;
		cout<<"Nomor Dus "<<b++<<" : "<<dus[a][0]<<endl;
	}
	b=4;
	for(a=0;a<3;a++){
		c=(a+4)*2;
		dus[a][1]=c;
		cout<<"Nomor Dus "<<b++<<" : "<<dus[a][1]<<endl;
	}
	b=7;
	for(a=0;a<3;a++){
		c=(a+7)*2;
		dus[a][2]=c;
		cout<<"Nomor Dus "<<b++<<" : "<<dus[a][2]<<endl;
	}
}
