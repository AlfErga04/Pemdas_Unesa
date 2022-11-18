#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "=================================" << endl;
    cout << "____Program Membentuk Segitiga___" << endl;
    cout << "_________Alifian Erga 013________" << endl;
    cout << "=================================" << endl;


    int n,i,j;

    cout << "Masukkan angka";
    cin >> n;
    cout << endl;

    for (int i = n; i >=1; i--) {
        for (j=1;j<=i;j++){
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
}
