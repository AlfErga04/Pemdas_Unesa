#include <iostream>

using namespace std;

void tower(int a, char asal, char tengah, char dest){
    if(a==1){
        cout << "Pindah disk ke-" <<a<<" dari " <<asal<<" ke " << dest << endl; 
        return;
    }
    tower(a-1, asal,dest,tengah);
    cout << "Pindah disk ke-" <<a<<" dari " <<asal<<" ke " << dest << endl;
    tower(a-1, tengah,asal,dest);
}

int main(int argc, char const *argv[])
{
    int a;

    cout << "==========================================" << endl;
    cout << "Program Rekursif Tower of Hanoi" << endl;
    cout << "Oleh Alifian Erga Iswardhana (22051204013)" << endl;
    cout << "==========================================" << endl;

    cout << "Ada 3 tower dimana tower dari kiri ke kanan \n" << "A, B, C" << endl;

    cout << "Masukkan jumlah disk yang ada di Tower of Hanoi ";
    cin >> a;
    tower(a, 'A', 'B', 'C');
    return 0;
}
