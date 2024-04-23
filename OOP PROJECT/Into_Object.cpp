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
    public:
        void input(){
            cout << "Kode MK: ";
            cin >> kodeMK;
            cout << "Nama MK: ";
            cin >> namaMK;
            cout << "SKS: ";
            cin >> sks;
        }

        void output(){
            cout << "Kode MK: " << kodeMK << endl;
            cout << "Nama MK: " << namaMK << endl;
            cout << "SKS: " << sks << endl;
        }
};

int main () {
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Dzaky";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}