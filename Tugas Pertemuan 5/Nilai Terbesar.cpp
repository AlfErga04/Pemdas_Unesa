#include <bits/stdc++.h>

using namespace std;
int main (){

    cout << "=============================" << endl;
    cout << "____Program Nilai Terbesar___" << endl;
    cout << "_______Alifian Erga 013______" << endl;
    cout << "=============================" << endl;

    
    int sum= 0;
    int n;
    cout << "masukkan banyak angka :" << endl;
    cin >> n;
    int arr[n];
    cout << "masukkan angka \n";
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i]=a;
        if(arr[i] > sum){
            sum = arr[i];
        }


    }
    cout << "Nilai terbesar " << endl;
cout << sum << endl;

}
