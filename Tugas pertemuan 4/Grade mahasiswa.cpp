#include  <bits/stdc++.h>

using namespace std;

int main()
{
    int uas,uts,absen,tugas;
    
    //header
    cout << "=====================================" << endl;
    cout << "____Program Menghitung Grade Nilai___" << endl;
    cout << "___________Alifian Erga 013__________" << endl;
    cout << "=====================================" << endl;

    cout << "masukkan nilai UAS ";
    cin >> uas;
    cout << "Masukkan nilai UTS "; 
    cin >> uts;
    cout << "Masukkan nilai absensi ";
    cin >> absen;
    cout << "Masukkan nilai tugas ";
    cin >> tugas;

    int cal = uas*30/100;
    int cal1 = uts*20/100;
    int cal2 = absen*20/100;
    int cal3 = tugas*30/100;
    
    int total = cal + cal1 + cal2 + cal3;

    if(0 <= total&& total <= 40){
        cout << "E" << endl;
    } else if(total >=  41 && total <= 60) {
        cout << "D" << endl;

    } else if (total >= 61 && total<= 80){
        cout << "C" << endl;
    }  else if (total >= 81 && total <= 90)
    {
        cout << "B" << endl;
    } else if(total >= 91 && total <= 100){
        cout << "A" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}