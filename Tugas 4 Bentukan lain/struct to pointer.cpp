#include <iostream>
using namespace std;
struct mahasiswa
{
char nama[50];
int stambuk;
};
int main(){

struct mahasiswa stud = {"Ali Tahir",1};
struct mahasiswa *ptr;
ptr = &stud; // penugasan dari stud ke ptr
std::cout << stud.nama << stud.stambuk ;
std::cout << "\n"<<ptr->nama << ptr->stambuk ;
return 0;

}
