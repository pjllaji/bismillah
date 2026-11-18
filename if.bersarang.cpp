#include <iostream>
using namespace std;

int main() {
    string nama, posisi;
    int np, nk, tb;
    char jk;

    // Input data awal
    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan Nilai Pretest: ";
    cin >> np;

    // Seleksi Pretest
    if (np < 75) {
        cout << "Maaf " << nama << " GAGAL seleksi (Pretest tidak memenuhi)" << endl;
    } 
    else {
        cout << "Masukkan Posisi (Admin/Teknisi): ";
        cin >> posisi;

        // Posisi ADMIN
        if (posisi == "Admin" || posisi == "admin") {
            cout << "Masukkan Nilai Praktik Komputer: ";
            cin >> nk;

            if (nk >= 80) {
                cout << "Selamat " << nama << " LULUS sebagai ADMIN" << endl;
            } else {
                cout << "Maaf " << nama << " GAGAL (Nilai praktik kurang)" << endl;
            }
        }

        // Posisi TEKNISI 
        else if (posisi == "Teknisi" || posisi == "teknisi") {
            cout << "Masukkan Jenis Kelamin (L/P): ";
            cin >> jk;

            cout << "Masukkan Tinggi Badan (cm): ";
            cin >> tb;

            if (jk == 'L' || jk == 'l') {
                if (tb >= 160) {
                    cout << "Selamat " << nama << " LULUS sebagai TEKNISI" << endl;
                } else {
                    cout << "Maaf " << nama << " GAGAL (Tinggi badan kurang)" << endl;
                }
            } 
            else if (jk == 'P' || jk == 'p') {
                if (tb >= 155) {
                    cout << "Selamat " << nama << " LULUS sebagai TEKNISI" << endl;
                } else {
                    cout << "Maaf " << nama << " GAGAL (Tinggi badan kurang)" << endl;
                }
            } 
            else {
                cout << "Jenis kelamin tidak valid" << endl;
            }
        }

        else {
            cout << "Posisi tidak valid" << endl;
        }
    }

    return 0;
}
