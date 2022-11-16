#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main (){

    cout << "Program soal nomor 2" << endl;
    cout << "013_TIA22_AlifianErga" << endl;

  cout << endl;
    int t;
     cin >> t;
    while(t--){
        int n;
        float per;
        cin >> n >> per;
        int batas;
        cin >> batas;
        int penentu = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x>= batas){
                penentu++;
            }
        }
        int a = n*per;
        cout << "Jumlah peserta yang hadir tepar waktu di kelas " << penentu << endl;
        cout << "Jumlah peserta minimal yang harus hadir di kelas "<< a << endl;


        if(penentu>=a){
            cout << "Kelas dilanjutkan" << endl;
    }   else{
            cout << "Kelas dihentikan" << endl;
        }
    }
    return 0;
}
