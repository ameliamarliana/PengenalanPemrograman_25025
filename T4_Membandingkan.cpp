#include <iostream>
using namespace std;

int main()
{	double x,y;

	cout << "Masukkan total belanja Pelanggan 1: ";
	cin >> x;

	cout << "Masukkan total belanja Pelanggan 2: ";
	cin >> y;

	if (x > y) {
		cout << "Pelanggan 1 berbelanja lebih banyak\n";
	} else if (x < y) {
		cout << "Pelanggan 2 berbelanja lebih banyak\n";
	} else {
		cout << "Kedua pelanggan berbelanja dengan jumlah yang sama\n";
	}
	return 0; }
