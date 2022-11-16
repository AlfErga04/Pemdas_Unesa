#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << "Program soal nomor 3" << endl;
    cout << "013_TIA22_AlifianErga" << endl;
   
   cout << endl;
    double h = 20000;
    double d = 0.3;
    double m = 10000;
    double u = 50000;
    int i = 0;
    while(u >= h){
        if(h < m){
            h = m;
        }

        u = u-h;

        if(h >= m){
            h = h-(h * d);
        }

        i++;
    }
    cout<<"Jumlah Barang Yang dapat dibeli: "<<i;
return 0;
}