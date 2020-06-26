#include <iostream>
using namespace std; 
int a=1,b=2,c;
void tukar1(int *c){
*c=a;
}
void tukar2(int *a){
*a=b;
}
void tukar3(int *b){
*b=c;
}
int main()
{
	cout<<"Nilai A = "<<a<<" , Nilai B = "<<b<<endl;
	tukar1(&c);
	tukar2(&a);
	tukar3(&b);
	cout<<"Hasil Tukar A = "<<a<<" , B = "<<b<<endl;
	return 0;
}
