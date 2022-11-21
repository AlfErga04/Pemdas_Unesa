#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int a,ai,a2,a3;

    cout << "==========================================" << endl;
    cout << "Tugas Membuat Program Bilangan Fibonacci" << endl;
    cout << "Oleh Alifian Erga Iswardhana (22051204013)" << endl;
    cout << "==========================================" << endl;

    cout << endl;
    cout<<"masukkan seberapa banyak fibonacci = ";
    cin>>a;

    ai=0;
    a2=1;
    
    cout<<ai<<" "<<a2<<" ";
    
    for(int i=0; i<a; i++)
    {
        a3=ai+a2;
        ai=a2;
        a2=a3;

        cout<<a3<<" ";
    }
    return 0;
}
