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
            cout << "Jurusan: " << jurusan << endl;
        }

};


class Matakuliah{
    private: //Akses modifier
        string kodemk;
        string namamk;
        int sks;
}