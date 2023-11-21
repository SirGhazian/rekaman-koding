// Universitas Negeri Padang - Informatika
// namaTugas        : Tugas ke-2 (Pertemuan ke-3)
// kasusProgram     : C++ Kalkulator menghitung kecepatan

#include <iostream>
using namespace std;

int main()
{
    float kecepatan, jarak, waktu;
    int pilihan_jarak, pilihan_waktu;

    cout << "\n=============================================" << endl;
    cout << "=  Program Menghitung Kecepatan berdasarkan =" << endl;
    cout << "=  data Jarak Tempuh dan data Waktu Tempuh  =" << endl;
    cout << "=============================================" << endl;
    cout << endl;

    cout << "Silahkan pilih 1 jika jarak berskala Kilometer, dan waktu berskala Jam" << endl;
    cout << "Silahkan pilih 2 jika jarak berskala Meter, dan waktu berskala Detik" << endl;
    cout << "--> Pilihan: ";
    cin >> pilihan_jarak;

    cout << "\n--> Masukkan data Jarak Tempuh: ";
    cin >> jarak;
    cout << "--> Masukkan data Waktu Tempuh: ";
    cin >> waktu;

    kecepatan = jarak / waktu;

    switch (pilihan_jarak)
    {
    case 1:
        cout << "\n=============================================================" << endl;
        cout << "Kecepatan anda berdasarkan data yang diinput adalah: " << kecepatan << " Km/Jam" << endl;
        cout << "=============================================================" << endl;
        break;
    case 2:
        cout << "\n=============================================================" << endl;
        cout << "Kecepatan anda berdasarkan data yang diinput adalah: " << kecepatan << " M/Detik" << endl;
        cout << "=============================================================" << endl;
        break;

    default:
        break;
    }

    return 0;
}
