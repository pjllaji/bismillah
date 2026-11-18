#include <iostream>
using namespace std;

int main() {
    int nilai_pengetahuan, pilihan, nilai_komputer, tinggi;
    string nama;
    char jenis_kelamin
    int nilai_pengetahuan;
    int pilihan;
    int nilai_praktik;
    int jenis_kelamin;
    int tinggi;

    cout << "===================================" << endl;
    cout << "      Sistem Seleksi Pegawai       " << endl;
    cout << "===================================" << endl;

    cout << "Masukkan nama calon pegawai : ";
    getline(cin, nama);

    cout << "Masukkan nilai pengetahuan : ";
    cin >> nilai_pengetahuan;

    if (nilai_pengetahuan >= 75) {
        cout << endl;
        cout << "Pilih posisi jabatan" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Teknisi" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        // ADMIN
        if (pilihan == 1) {
            cout << "Masukkan nilai tes praktik komputer : ";
            cin >> nilai_praktik;

            if (nilai_praktik >= 80) {
                cout << "Selamat " << nama << ", Anda LULUS sebagai Admin" << endl;
            } else {
                cout << "Maaf " << nama << ", Anda GAGAL" << endl;
            }
        }

        // TEKNISI
        else if (pilihan == 2) {
            cout << "(1 = Laki-laki, 0 = Perempuan)" << endl;
            cout << "Masukkan jenis kelamin : ";
            cin >> jenis_kelamin;
            cout << "Masukkan tinggi badan (cm) : ";
            cin >> tinggi;

            if ((jenis_kelamin == 1 && tinggi >= 160) ||
                (jenis_kelamin == 0 && tinggi >= 155)) {
                cout << "Selamat " << nama << ", Anda LULUS sebagai Teknisi" << endl;
            } else {
                cout << "Maaf " << nama << ", Anda GAGAL" << endl;
            }
        }

        else {
            cout << "Pilihan tidak valid" << endl;
        }
    } 
    else {
        cout << "Maaf " << nama << ", Anda GAGAL seleksi awal" << endl;
    }

    cout << "===================================" << endl;
    return 0;
}