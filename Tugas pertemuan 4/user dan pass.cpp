 #include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
//deklarasi variabel yang akan digunakan
string uname, name, pass, password, pass1;

//Header program
cout << "------------------------------------" << endl;
cout << "__________Program LOGIN USER________" << endl;
cout << "_______Oleh Alifian Erga(013)_______" << endl;
cout << "------------------------------------" << endl;
cout << endl;

//Input user
cout << "Masukkan username anda: ";
    getline(cin, uname);
cout << "Masukkan password: ";
    getline(cin, pass);

//Proses
back:
cout << "Masukkan kembali password anda: ";
    getline(cin, password);

if(password == pass)
{
    cout << "Selamat data anda sudah disimpan silahkan login" << endl;
    cout << endl;
    cout << "_________LOGIN APP________" << endl;
   start:
    cout << "Username: ";
    getline(cin,name);
    cout << "Password: ";
    getline(cin,pass1);
        if (name != uname)
        {
            cout << "\n\n!!ERROR!! Username atau password salah, silahkan ulangi\n\n";
            goto start;
        }
        else if (pass1!=password)
        {
            cout << "\n\n!!ERROR!! Username atau password salah, silahkan ulangi\n\n";
            goto start;
        }
        else cout << "Selamat anda berhasil login";
}
else if (password != pass)
{
    cout << "\n\nMaaf password tidak cocok, silahkan ulangi\n\n";
    goto back;
}
    return 0;
}
