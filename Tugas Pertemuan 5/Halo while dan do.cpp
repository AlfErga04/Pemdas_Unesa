#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "====================================" << endl;
    cout << "____Program Halo while & do-while___" << endl;
    cout << "__________Alifian Erga 013__________" << endl;
    cout << "====================================" << endl;


    cout << "Halo dengan while" << endl;
    int halo = 1;
    while (halo <=5)
    {
        cout << "Halo" << " " << halo << endl;
        halo++;
    }
cout << endl;
    cout << "Halo dengan do-while" << endl;
    int a = 1;
    do {
        cout << "Halo" << " " << a << endl;
        a++;
    } while (a <= 5);
    return 0;
}
