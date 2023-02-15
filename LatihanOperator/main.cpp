#include <iostream>

using namespace std;

int main()
{
    int a, t, r;
    float LuasSegitiga, LuasLingkaran;
    float Phi = 3.14;

    cout << "=============================" << endl;
    cout << " APLIKASI PENGHITUNG SEGITIGA " << endl;
    cout << "=============================" << endl;

    cout << "Masukkan alas segitiga : ";
    cin >> a;
    cout << "Masukkan tinggi segitiga : ";
    cin >> t;
    LuasSegitiga = 0.5*a*t;
    cout << "Luas segitiga adalah " << LuasSegitiga <<" cm2" << endl;

    cout << "=============================" << endl;
    cout << " APLIKASI PENGHITUNG LINGKARAN " << endl;
    cout << "=============================" << endl;
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> r;
    LuasLingkaran = Phi*r*r;
    cout << "Luas Lingkaran adalah " << LuasLingkaran <<" cm2" << endl;
    return 0;
}
