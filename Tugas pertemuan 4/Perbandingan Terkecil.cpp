#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//deklarasi dulu angkanya
int a, b, output;

//Header
cout << "------------------------------" << endl;
cout << "____Program Angka Terkecil____" << endl;
cout << "_______Oleh Alifian Erga______" << endl;
cout << "------------------------------" << endl;
cout << endl;

//input user
cout << "Masukkan bilangan pertama ";
cin >> a;
cout << "Masukkan bilangan kedua ";
cin >> b;

//proses
output = (a < b) ? a : b;
cout << "Bilangan yang terkecil adalah " << output << endl;
    return 0;
}
