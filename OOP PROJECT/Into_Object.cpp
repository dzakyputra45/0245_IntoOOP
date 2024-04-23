#include <iostream>
using namespace std;

class mahasiswa{
    public: //Akses Modifier
        string nama;
        int umur;
        string jurusan;

        void output(){
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
        }
}