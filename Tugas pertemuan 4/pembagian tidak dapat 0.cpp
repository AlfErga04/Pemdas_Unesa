#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
//Deklarasi angka
int a,b,hasil;

//Header
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
if ( b != 0 )
{
    cout << "Hasil dari pembagian adalah " << a/b << endl;
}
else cout << "Maaf pembagi tidak boleh = 0" << endl;
    return 0;
}
