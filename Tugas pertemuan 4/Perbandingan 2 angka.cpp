#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   //deklarasi variabel awal 
    int a;
    int b;
//Header
cout << "----------------------------" << endl;
cout << "____Program Perbandingan____" << endl;
cout << "______Oleh Alifian Erga_____" << endl;
cout << "----------------------------" << endl;
cout << endl;

//Input user
cout << "Masukkan nilai pertama ";
cin >> a;
cout << "Masukkan nilai kedua ";
cin >> b;

//proses
if (a < b )
{
    cout << "Angka terbesar = " << b << endl;
    cout << "Angka terkecil = " << a;
}
else if (a > b)
{
    cout << "Angka terbesar = " << a << endl;
    cout << "Angka terkecil = " << b;
}
    return 0;
}
