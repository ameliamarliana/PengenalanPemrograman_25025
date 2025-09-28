#include <iostream>
#include <string>
using namespace std;

int main()
{ string NamaBarang;
int jumlah;
double total = 0;
double diskon =  0;
double MinyakGoreng = 20000;
double Santan = 9000;
double Sunlight = 5000;
double Fanta = 6000;
double PastaGigi = 12000;
double KacangAtom = 5000;

cout << "=== Waroeng Abah ===" << endl << endl;
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

if (total >= 100000) {
    cout << "Anda mendapat diskon 10%\n";
} else if (total >= 50000) {
    cout << "Anda mendapat diskon 5%\n";
} else {
    cout << "Anda tidak mendapatkan diskon\n";
}
return 0;
}




 
return 0; }
