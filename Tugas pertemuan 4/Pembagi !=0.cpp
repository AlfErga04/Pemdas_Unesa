#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//Deklarasi variabel
int a,b,hasil;

//Header program
cout << "------------------------------" << endl;
cout << "_______Program Pembagian______" << endl;
cout << "_______Oleh Alifian Erga______" << endl;
cout << "------------------------------" << endl;
cout << endl;

//input user
cout << "Masukkan bilangan pertama ";
cin >> a;
cout << "Masukkan bilangan pembagi ";
cin >> b;

//proses
if ( b == 0 )
{
    cout << "!!ERROR!! pembagi tidak bisa = 0" << endl;
}
else cout << "Hasil dari pembagian adalah " << a/b << endl;
    return 0;
}
