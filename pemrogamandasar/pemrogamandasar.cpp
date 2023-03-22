#include <iostream>
using namespace std;

float luaspersegipanjang(float p, float l) {	 
	return p * l;
}

float luassegitiga(float a, float t) {			
	return 0.5 * a * t;
}

float luaslingkaran(float r) {					
	return 3.14 * r * r;
}


int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;

	

	do
	{
		cout << "\n\n---------------------" << endl;
		cout << "-------M E N U-------" << endl;
		cout << "---------------------" << endl;

		cout << "1. luas persegipanjang" << endl;
		cout << "2. luas segitiga" << endl;
		cout << "3. luas lingkaran" << endl;
		cout << "4. exit" << endl;

		cout << "masukan pilihan : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			cout << "masukan panjang : ";
			cin >> panjang;
			cout << "masukan lebar : ";
			cin >> lebar;
			cout << "luas persegi panjang = " << luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "masukan alas : ";
			cin >> panjang;
			cout << "masukan tinggi : ";
			cin >> lebar;
			cout << "luas segitiga = " << luassegitiga(alas, tinggi);
			break;

		case 3:
			cout << "masukan jari-jari : ";
			cin >> jejari;
			cout << "luas lingkaran = " << luaslingkaran(jejari);
			break;

		case 4:

			break;
		default:
			cout << "pilihan anda salah!";
			break;
		}
	} while (pilihan != 4);

}
