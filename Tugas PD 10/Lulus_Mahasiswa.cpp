#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int a;

    cout << "=======================================================" << endl;
    cout << "Tugas Program Menentukan Kelulusan Mahasiswa Dari Nilai" << endl;
    cout << "Oleh Alifian Erga Iswardhana (22051204013)" << endl;
    cout << "=======================================================" << endl;

    cout<<"masukkan banyak mahasiswa = ";
    cin>>a;

    int nilai[a];
    string nama[a];

    for(int i=0; i<a; i++){
        cout<< i+1 <<". masukkan nama mahasiswa :";
        cin>>nama[i];
        cout<<"   masukkan nilai untuk mahasiswa "<<nama[i]<<" : ";
        cin>>nilai[i];
        
    }

    for(int i=0; i<a; i++){
        if(nilai[i]>50){
        cout<<nama[i]<<" lulus dengan nilai " << nilai[i] << endl;
    }
    }

    
    return 0;
}
