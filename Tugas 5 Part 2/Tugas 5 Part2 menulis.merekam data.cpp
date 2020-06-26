#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream mhsFile;

    mhsFile.open("datamhs.txt");
    

    //menulis sesuatu kedalam file
    mhsFile << "Maruly Widjaya Siyu\n";
    mhsFile << "A3\n";
    mhsFile << "13020190128\n";

    mhsFile.close();
    

}
