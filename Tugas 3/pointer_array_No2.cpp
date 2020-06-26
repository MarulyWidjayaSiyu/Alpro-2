#include <iostream>
using namespace std;

void fungsi(int *sum,int n){
int input;
for(int i=0;i<n;i++){
cin>>input;
*sum+=input;
}
}

int main(){
int sum,n;
cout<<"Jumlah bilangan:";
cin>>n;
fungsi(&sum,n); 
cout<<"Hasil Penjumlahan:"<<sum;
return 0;
}
