#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ifstream input;

    input.open("datatugas5.txt");

    //menulis sesuatu kedalam file
    string line;
    getline(input, line);
    cout << line << endl;  //perintah menulis/menampilkan teks file

    input.close();

}
