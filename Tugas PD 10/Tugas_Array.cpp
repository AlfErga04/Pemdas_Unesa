#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int n;

    cout << "==========================================" << endl;
    cout << "Tugas Membuat Program Bilangan Fibonacci" << endl;
    cout << "Oleh Alifian Erga Iswardhana (22051204013)" << endl;
    cout << "==========================================" << endl;

    cout << endl;
    cout<<"masukkan banyak bilangan : ";
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cout<<"masukkan bilangan = ";
        cin>>a[n];
    }

    cout<<a[n];
    return 0;
}
