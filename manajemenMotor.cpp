#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan;
    int tambah;
    string inputBrandMotor;
    string inputNamaMotor;

    int baris = 4;
    int kolom = 3;
    int MAX_kolom = 10;

    string brandMotor[baris] = {"Yamaha", "Honda", "Kawasaki", "Suzuki"};
    string namaMotor[baris][MAX_kolom] = {{"R15", "R6", "R1M"},
                                          {"CBR150R", "CBR600", "CBR1000RR"},
                                          {"ZX25R", "ZX6R", "ZX10RR"},
                                          {"GSX-R125", "GSX-R750", "GSX-R1000"}};

    bool keluarProgram = false;

    int kolom_Yamaha = 3;
    int kolom_Honda = 3;
    int kolom_Kawasaki = 3;
    int kolom_Suzuki = 3;

    while (!keluarProgram) {
        cout << endl;
        cout << "++ ================================== ++" << endl;
        cout << "||      Pusat Import/Export Motor     ||" << endl;
        cout << "||         Republik Indonesia         ||" << endl;
        cout << "++ ================================== ++" << endl;
        cout << endl;
        cout << "====================================" << endl;
        cout << "| 1) Tampilkan List Motor          | " << endl;
        cout << "| 2) Tambah List Motor             | " << endl;
        cout << "| 3) Keluar Program                | " << endl;
        cout << "====================================" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                system("cls");
                cout << "++ ====================== ++" << endl;
                cout << "||       LIST MOTOR       ||" << endl;
                cout << "++ ====================== ++" << endl;

                cout << endl;
                cout << "==[ Yamaha ]==" << endl;
                for (int i = 0; i < kolom_Yamaha; i++) {
                    cout << "--> " << namaMotor[0][i] << endl;
                }
                cout << endl;

                cout << "==[ Honda ]==" << endl;
                for (int i = 0; i < kolom_Honda; i++) {
                    cout << "--> " << namaMotor[1][i] << endl;
                }
                cout << endl;

                cout << "==[ Kawasaki ]==" << endl;
                for (int i = 0; i < kolom_Kawasaki; i++) {
                    cout << "--> " << namaMotor[2][i] << endl;
                }
                cout << endl;

                cout << "==[ Suzuki ]==" << endl;
                for (int i = 0; i < kolom_Suzuki; i++) {
                    cout << "--> " << namaMotor[3][i] << endl;
                }
                cout << endl;

                break;

            case 2:
                system("cls");
                cout << "++ ========================= ++" << endl;
                cout << "||     TAMBAH LIST MOTOR     ||" << endl;
                cout << "++ ========================= ++" << endl;

                cout << endl
                     << "Berapa banyak list motor yang ingin ditambahkan? ";
                cin >> tambah;

                for (int inputTotal = 0; inputTotal < tambah; inputTotal++) {
                    cout << endl
                         << "--> Masukkan nama brand: ";
                    cin >> inputBrandMotor;

                    if (inputBrandMotor == "Yamaha" || inputBrandMotor == "YAMAHA" || inputBrandMotor == "yamaha") {
                        cout << "--> Masukkan nama motor: ";
                        cin >> inputNamaMotor;

                        if (kolom_Yamaha < MAX_kolom) {
                            namaMotor[0][kolom_Yamaha] = inputNamaMotor;
                            kolom_Yamaha++;

                            cout << endl
                                 << "[ Data berhasil ditambahkan! ]" << endl;
                        } else {
                            cout << "Maaf, kapasitas maksimum Yamaha sudah tercapai." << endl
                                 << endl;
                        }
                    }

                    else if (inputBrandMotor == "Honda" || inputBrandMotor == "HONDA" || inputBrandMotor == "honda") {
                        cout << "Masukkan nama motor: ";
                        cin >> inputNamaMotor;

                        if (kolom_Yamaha < MAX_kolom) {
                            namaMotor[1][kolom_Honda] = inputNamaMotor;
                            kolom_Honda++;
                        } else {
                            cout << "Maaf, kapasitas maksimum Honda sudah tercapai." << endl;
                        }
                    }

                    else if (inputBrandMotor == "Kawasaki" || inputBrandMotor == "KAWASAKI" || inputBrandMotor == "kawasaki") {
                        cout << "Masukkan nama motor: ";
                        cin >> inputNamaMotor;

                        if (kolom_Yamaha < MAX_kolom) {
                            namaMotor[2][kolom_Kawasaki] = inputNamaMotor;
                            kolom_Kawasaki++;
                        } else {
                            cout << "Maaf, kapasitas maksimum Kawasaki sudah tercapai." << endl;
                        }
                    }

                    else if (inputBrandMotor == "Suzuki" || inputBrandMotor == "SUZUKI" || inputBrandMotor == "suzuki") {
                        cout << "Masukkan nama motor: ";
                        cin >> inputNamaMotor;

                        if (kolom_Yamaha < MAX_kolom) {
                            namaMotor[2][kolom_Suzuki] = inputNamaMotor;
                            kolom_Suzuki++;
                        } else {
                            cout << "Maaf, kapasitas maksimum Honda sudah tercapai." << endl;
                        }
                    }

                    else {
                        cout << "Brand tidak valid!";
                    }
                }
                break;

            case 3:
                keluarProgram = true;
                break;

            default:
                break;
        }
    }

    return 0;
}
