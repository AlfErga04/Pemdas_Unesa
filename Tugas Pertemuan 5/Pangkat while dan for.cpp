#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "==================================" << endl;
    cout << "____Program Pangkat For & While___" << endl;
    cout << "_________Alifian Erga 013_________" << endl;
    cout << "==================================" << endl;


    int n;

    cout << "Masukkan angka untuk pangkat ";
    cin >> n;

    cout << "Perulangan for " << endl;
    for (int i=0; i<=n; i++)
    {
        cout << pow(2,i) << endl;
    }
    cout << endl;

    cout << "Perulangan while " << endl;
    int i = 0;
    while (i!=n+1)
    {
        cout << pow (2,i) << endl;
        i++;
    }
    return 0;
}
