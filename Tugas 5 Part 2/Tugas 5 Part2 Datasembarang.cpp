#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream output;

    output.open("datatugas5.txt");

    //menulis sesuatu kedalam file
    output << "data sembarang";
    output.close();

}
