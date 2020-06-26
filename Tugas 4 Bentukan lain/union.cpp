#include <iostream>
using namespace std;

union MyUnion
{
      int x;
      int y;
};

int main()
{
      //memberi nilai 10 pada variabel x
      MyUnion data;
      data.x  = 10;

      cout<<"Nilai varibel dengan Union "<<endl;
      cout<<"-------------------------- "<<endl;
      cout<<"Nilai x = "<<data.x<<endl;
      cout<<"Nilai y = "<<data.y<<endl;
      //y bernilai sama dengan x

      
}
