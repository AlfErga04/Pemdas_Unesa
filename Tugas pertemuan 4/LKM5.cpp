#include <iostream>
#include <stdio.h>
#include <cmath>
#define phi 3.14

using namespace std;

int main(int argc, char const *argv[])
{
//Deklarasi variabel
    float lingkaran, silinder, jari;
    int kubus, S;
    int a, b, c;

    cout << "======================" << endl;
    cout << "____Program LKM PD5___" << endl;
    cout << "____Alifian Erga 013__" << endl;
    cout << "======================" << endl;

start:
    cout << "Pilih nomor berikut untuk memilih program yang akan digunakan" << endl;
    cout << "1. Volume kubus" << endl;
    cout << "2. Luas lingkaran" << endl;
    cout << "3. Volume silinder" << endl;
    cin >> a;

    switch (a)
            {
                case 1:
                    cout << "Masukkan panjang sisi kubus " << endl;
                    cin >> S;
                    cout << "Volume kubus adalah " << S * S * S << endl;
                    cout << "Pilih 1 jika ingin menggunakan program lagi dan 0 untuk mengakhiri " <<  endl;
                    cin >> b;
                    if (b == 1)
                        goto start;
                        else cout << "Terima kasih" << endl;
                break;

                case 2:
                    cout << "Masukkan jari-jari lingkaran " << endl;
                    cin >> jari;
                    cout << "Luas lingkaran adalah " << phi * jari * jari << endl;
                    cout << "Pilih 1 jika ingin menggunakan program lagi dan 0 untuk mengakhiri " << endl;
                    cin >> b;
                    if (b==1)
                        goto start;
                        else cout << "Terima kasih" << endl;
                break;

                case 3:
                    cout << "Masukkan jari-jari alas " << endl;
                    cin >> jari;
                    cout << "Masukkan tinggi silinder " << endl;
                    cin >> silinder;
                    cout << "Volume silinder adalah " << phi * jari * jari * silinder << endl;
                    cout << "Pilih 1 jika ingin menggunakan program lagi dan 0 untuk mengakhirir " << endl;
                    cin >> b;
                    if (b==1)
                        goto start;
                        else cout << "Terima kasih" << endl; 
                    
                    default: cout << "Maaf tidak ada operasi" << endl;
                    break;
            }
            cout << "Akhir dari program" << endl;
    return 0;
}
