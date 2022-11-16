#include <iostream>
#include <math.h>
#include "bits/stdc++.h"

using namespace std;

int main(int argc, char const argv[])
{
    int t, n, m;

    cout << "Program Soal nomor 1" << endl;
    cout << "013_TIA22_Alifian Erga" << endl;

    cout << endl;

    cin >> t >> n;

    for(int i=0; i<=n; i++){
        if(i>=1){
            m=i % 4;
            if(m==1){
                t=t*2;
                cout<<i<<"semi"<<t<<endl;
            }else if(m==2){
                t=t+1;
                cout<<i<<"panas"<<t<<endl;
            }else if(m==3){
                t=t+1;
                cout<<i<<"gugur"<<t<<endl;
            }else if(m==0){
                t=t+(t*0.5);
                cout<<i<<"dingin"<<t<<endl;
            }
        }else{
            cout<<i<<"-"<<t<<endl;
        }
    }
cout<<"jawaban"<<t<<endl;

    return 0;
}
