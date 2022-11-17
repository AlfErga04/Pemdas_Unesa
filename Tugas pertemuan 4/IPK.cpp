#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float ipk;

    //header
    cout << "====================" << endl;
    cout << "_____Program IPK____" << endl;
    cout << "__Alifian Erga 013__" << endl;
    cout << "====================" << endl;

    cout << "Masukkan IPK Mahasiswa" << endl;
    cin >> ipk;

    if (ipk >= 3.5)
        cout << "Sempurna" << endl;
        
        else if (ipk >= 3)
        cout << "sangat baik" << endl;

        else if (ipk >= 2)
        cout << "baik" << endl;

        else if (ipk >= 1)
        cout << "mengulang" << endl;

        else if (ipk < 1)
        cout << "tidak lulus" << endl;

    return 0;
}
