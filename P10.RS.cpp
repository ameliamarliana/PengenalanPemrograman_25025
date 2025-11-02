#include <iostream>
using namespace std;

struct Pasien {
    string nama;
    string penyakit;
    string alamat;
    float biaya;
};

int main() {
    int n;
    cout << "Masukkan jumlah pasien: ";
    cin >> n;
    cin.ignore();

    Pasien pasien[n];
    float totalBiaya = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nData Pasien ke-" << i + 1 << endl;
        cout << "Nama Pasien     : ";
        getline(cin, pasien[i].nama);
        cout << "Jenis Penyakit  : ";
        getline(cin, pasien[i].penyakit);
        cout << "Alamat Pasien   : ";
        getline(cin, pasien[i].alamat);
        cout << "Biaya Perawatan : Rp ";
        cin >> pasien[i].biaya;
        cin.ignore();

        totalBiaya += pasien[i].biaya;
    }

    cout << "\n=== Daftar Pasien dan Biaya Perawatan ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "Nama Pasien     : " << pasien[i].nama << endl;
        cout << "Jenis Penyakit  : " << pasien[i].penyakit << endl;
        cout << "Alamat Pasien   : " << pasien[i].alamat << endl;
        cout << "Biaya Perawatan : Rp " << pasien[i].biaya << endl;
    }

    cout << "\nTotal Biaya Seluruh Pasien: Rp " << totalBiaya << endl;

    return 0;
}
