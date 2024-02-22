#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main(){
	int stop = 0; // marking
	cout << "Selamat datang di Dunia Kami!, buatlah pakaian sesuai dengan gaya anda!" << endl;
	
	list<Shirt> listShirt; // list baju
	Shirt Baju; // objek cucu 1
	Shirt Baju2; // objek cucu 2
	Shirt Baju3; // obejk cucu 3
	while(stop == 0)
	{
		cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "Pilih fitur dibawah ini!" << endl;
		cout << "1. Buat baju"<< endl;
		cout << "2. Tampilkan baju" << endl;
		cout << "3. Keluar" << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "pilih (1/2/3): ";
		int pilih;
		cin >> pilih; // milih fitur
		switch(pilih)
		{
			case 1:
			Baju.BuatBaju(listShirt); // masuk ke prosedur pembuatan baju
			cout << "Ingin membuat baju ke dua? (y/n): "; 
			char kedua; 
			cin >> kedua;
			if(kedua == 'y') // jika ingin membuat baju ke 2
			{
				Baju2.BuatBaju(listShirt); // masuk ke prosedur pembuatan baju
				cout << "Ingin membuat baju ke tiga? (y/n): ";
				char ketiga;
				cin >> ketiga;
				if(ketiga == 'y') // jika ingin membuat baju ke 3
				{
					Baju3.BuatBaju(listShirt); // masuk ke pembuatan baju
				}
			}
			break;
			
			case 2:
			Baju.tampil(listShirt); // menampilkan baju/produk
			break;
			
			default:
			cout << "Mau keluar? (y/n):" << endl;
			char keluarr;
			cin >> keluarr;
			if(keluarr == 'y') // jika ingin keluar
			{
				stop = 1; // loop berhenti
			}
			break;
		}
	}
	return 0;
}