#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;

    cout << "-----------------------------------------" << endl;
    cout << "____Program Mencari Bilangan Terbesar____" << endl;
    cout << "_____________Oleh Alifian Erga___________" << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;
    
    start:
    cout << "Masukkan bilangan pertama " << endl;
    cin >> a; 
    cout << "Masukkan bilangan kedua " << endl;
    cin >> b;
    cout << "Masukkan bilangan ketiga " << endl;
    cin >> c;

        if (a>b&&a>c)
            {
                cout << "Bilangan terbesarnya adalah " << a << endl;
            }
        else if (b>a&&b>c)
            {
                cout << "Bilangan terbesarnya adalah " << b << endl;
            }
        else if (c>a&&c>b)
            {
                cout << "Bilangan terbesarnya adalah " << c << endl;
            }
    cout << "Masukkan 1 jika ingin mencoba lagi dan 0 untuk keluar " << endl;
    cin >> d;
        if (d==1)
        goto start;
        else cout << "Terima kasih" << endl;
    
    return 0;
}
