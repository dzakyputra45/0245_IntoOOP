#include <iostream>
using namespace std;

class bangunDatar{
    private: //Akses modifier
        float panjang, lebar;
    public;
        float luas;

        void input () {  // mothode input persegi panjang

            cout << "Masukkan panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }

        float hitungluas (){
            return panjang*lebar;
        }

        void display (){
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungluas() << endl;
        }
};

int main (){
    BangunDatar pp;
    pp.input();
    pp.display();
}