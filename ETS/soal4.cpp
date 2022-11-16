#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main (){
    int a,pa;
    float d;
    
    cout << "Program soal nomor 4" << endl;
    cout << "013_TIA22_AlifianErga" << endl;

    cout << endl;
    cout<<"a : ";
    cin>>a;
    cout<<"pa : ";
    cin>>pa;
    cout<<"d : ";
    cin>>d;
    int max = (a > pa) ? a : pa;

    do
    {

        if (max % a == 0 && max % pa == 0)
        {
            cout << "harga = " << max<<endl;
            break;
        }
        else
            ++max;
    } while (true);

    cout<<"jumlah pembelian a = "<<max/a<<endl;
    cout<<"jumlah pembelian pa = "<<max/pa<<endl;
    cout<<"diskon harga = "<<max*d;
    return 0;
    
}
