#include <iostream>
#include <math.h>

using namespace std;



int main(int argc, char const *argv[])
{
    cout << "========================" << endl;
    cout << "____Program pangkat 2___" << endl;
    cout << "____Alifian Erga 013____" << endl;
    cout << "========================" << endl;


    int i,n,j;
    cout << "Masukkan angka untuk pangkat ";
    cin >> n;
    
    for (int i = 0; i<=n; i++)
    {
        cout << i << " " << pow(2, i) << endl;
    }
    return 0;
}
