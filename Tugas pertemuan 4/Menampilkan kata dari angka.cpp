#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;

    //Header
    cout << "-------------------------------" << endl;
    cout << "____Program Angka jadi kata____" << endl;
    cout << "_______Oleh Alifian Erga_______" << endl;
    cout << "-------------------------------" << endl;
    cout << endl;  

    cout << "Masukkan angka 1-9 ";
    cin >> a;

    switch (a)
        {
            case 1:
                cout << "SATU" << endl;
        
            break;

            case 2:
                cout << "DUA" << endl;
            
            break;

            case 3:
                cout << "TIGA" << endl;

            break;

            case 4:
                cout << "EMPAT" << endl;

            break;
            
            case 5:
                cout << "LIMA" << endl;

            break;

            case 6:
                cout << "ENAM" << endl;

            break;

            case 7:
                cout << "TUJUH" << endl;

            break;

            case 8:
                cout << "DELAPAN" << endl;

            break;

            case 9:
                cout << "SEMBILAN" << endl;

            break;

    
        default: cout << "Maaf angka di luar 1-9" << endl;
            break;
        }
    return 0;
}
