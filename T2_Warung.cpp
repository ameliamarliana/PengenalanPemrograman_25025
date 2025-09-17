#include <iostream>
#include <string>
using namespace std;

int main()
{ string NamaBarang;
int jumlah;
double total = 0;
double MinyakGoreng = 5000;
double Santan = 6000;
double Sunlight = 2500;
double Fanta = 4000;
double PastaGigi = 8000;
double KacangAtom = 1000;

cout << "=== Waroeng Abah ===" << endl << endl;
cout << "List Barang dan Harga: " << endl;
cout << "1. Minyak Goreng Rp.5000" << endl;
cout << "2. Santan Rp.6000" << endl;
cout << "3. Sunlight " << endl;
cout << "4. Fanta " << endl;
cout << "5. Pasta Gigi " << endl;
cout << "6. Kacang Atom " << endl << endl;
cout << "Masukkan Nama Barang: ";
getline(cin, NamaBarang);
cout << "Masukkan Jumlah Barang: ";
cin >> jumlah;

if (NamaBarang == "Minyak Goreng")
 { total = MinyakGoreng * jumlah; }
 else if (NamaBarang == "Santan") 
 { total = Santan * jumlah; }
 else if (NamaBarang == "Sunlight")
 { total = Sunlight * jumlah; }
 else if (NamaBarang == "Fanta")
 { total = Fanta * jumlah; }
 else if (NamaBarang == "Pasta Gigi")
 { total = PastaGigi * jumlah; }
 else if (NamaBarang == "Kacang Atom")
 { total = KacangAtom * jumlah; }
 else {
     cout << "Barang Tidak Tersedia " << endl;
    return 0;
}

cout << "\n=== Struk Belanja ===" << endl;
cout << "Barang: " << NamaBarang << endl;
cout << "Jumlah: " << jumlah << endl;
cout << "Total: Rp. " << total << endl;

return 0; }
