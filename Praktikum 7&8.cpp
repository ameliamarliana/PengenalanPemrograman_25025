#include <iostream>
using namespace std;

int main()
{ int StokMie = 0;
  int pilihan;
  
  do {
      cout << "====Menu Pengelolaan Stok Barang Waroeng Abah====\n ";
      cout << "1.Tambah stok mie instan\n";
      cout << " 2. Kurangi stok mie instan\n";
      cout << " 3. Lihat stok mie instan\n";
      cout << " 4. Keluar\n";
      cout << "Masukkan pilihan anda: \n";
      cin >> pilihan;
      
      switch (pilihan) {
          case 1: {
          int tambah;
          cout << "Jumlah yang akan ditambah: \n";
          cin >> tambah;
          StokMie += tambah;
          cout << "Stok saat ini: " << StokMie << "\n";
          break;
          }
          case 2: {
           int kurang;
           cout << "Jumlah yang akan dikurangi: \n";
           cin >> kurang;
           if (StokMie >= kurang) {
              StokMie -= kurang;
              cout << "Berhasil dikurangi. Stok saat ini: " << StokMie << "\n";
           } else {
              cout << "Stok tidak memenuhi\n";
           }
           break;
          }
          case 3:
           cout << "Stok mie instan saat ini adalah " << StokMie << "\n";
           break;
          case 4: 
           cout << "Program Selesai." << endl;
           break;
          default:
           cout << "Pilihan tidak ada. Coba lagi!\n";
           break;
        }
  } while (pilihan != 4);
    

    return 0;
}
