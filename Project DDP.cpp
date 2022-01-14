#include <iostream>

using namespace std;

int main() {
	


	int pil, pil2, bil1, bil2;
	float hasil;
	string aksi;
	char PIL;
	char choise;
	int ulang;
	int ulang1 = 1;
	int ulang0 = 1;

	menu:
	system("cls");
	cout << "\t===========================" << endl;
	cout << "\t  KALKULATOR MULTI FUNGSI" << endl;
	cout << "\t===========================" << endl;
	cout << endl;
	string pilihan[5] = { "===========================","1. KALKULATOR SEDERHANA","2. KONVERSI SATUAN","3. BANGUN DATAR","==========================="};

	for (int a = 0; a < 5; a++) {
		cout << pilihan[a] << endl;
	}
	cin >> PIL;
	cout << endl;
	if (PIL == '1') {
		
		kalkulator:
			system("cls");
			cout << "KALKULATOR SEDERHANA\n";
			cout << "===========================" << endl;
			cout << "1. Penjumlahan\n";
			cout << "2. Pengurangan\n";
			cout << "3. Pembagian\n";
			cout << "4. Perkalian \n";
			cout << "===========================" << endl;
			cout << endl;
			cout << "Pilihan Anda : ";
			cin >> pil;
			cout << "Masukan Bilangan Pertama :";
			cin >> bil1;
			cout << "Masukan Bilangan Kedua : ";
			cin >> bil2;
			cout << endl;

			switch (pil)
			{
			case 1: hasil = bil1 + bil2;
				aksi = '+';
				break;
			case 2: hasil = bil1 - bil2;
				aksi = '-';
				break;
			case 3: hasil = bil1 / bil2;
				aksi = ':';
				break;
			case 4: hasil = bil1 * bil2;
				aksi = 'x';
				break;
			default:
				cout << "Perintah Salah" << endl;
				break;
			}
			cout << "===========================" << endl;
			cout << "\t" << bil1 << " " << aksi << " " << bil2 << " = " << hasil << endl;
			cout << "===========================" << endl;
			cout << endl;

		ulang:
			cout << "apakah ingin mengulang?\n";
			cout << "1.yes\n";
			cout << "2.kembali ke menu awal" << endl;
			cout << "3.no\n";

			cin >> ulang;
			if (ulang == 1) {

				goto kalkulator;
			}
			else if (ulang == 2) {

				goto menu;
			}
			else if (ulang == 3) {
				return 0;
			}
			else {
				cout << "input salah.";
				system("pause");
				goto ulang;
			}
		
		
	}
	else if (PIL == '2') {
		

		satuan:
			double M, Cm, Inci, Km;
			system("cls");
			cout << "KONVERSI SATUAN\n" << endl;
			cout << "===========================" << endl;
			cout << "1.Meter ke Cm\n";
			cout << "2.Meter ke Km\n";
			cout << "3.Meter ke Inci\n";
			cout << "---------------------------" << endl;
			cout << "4.Cm ke Meter\n";
			cout << "5.Cm ke Km\n";
			cout << "6.Cm ke Inci\n";
			cout << "---------------------------" << endl;
			cout << "7.Km ke Meter\n";
			cout << "8.Km ke Cm\n";
			cout << "9.Km ke Inci\n";
			cout << "===========================" << endl;
			cin >> pil;

			switch (pil)
			{
			case 1:
				cout << "Meter ke Cm\n";
				cout << "Masukan M : ";
				cin >> M;

				Cm = M * 100;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << Cm << " Cm" << endl;
				cout << "===========================" << endl;

				break;
			case 2:
				cout << "Meter ke Km\n";
				cout << "masukan M : ";
				cin >> M;

				Km = M * 0.0001;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << Km << " Km" << endl;
				cout << "===========================" << endl;

				break;
			case 3:
				cout << "Meter ke Inci\n";
				cout << "masukan M : ";
				cin >> M;

				Inci = M * 39.370;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << Inci << " Inci" << endl;
				cout << "===========================" << endl;

				break;
			case 4:
				cout << "Cm ke Meter\n";
				cout << "Masukan Cm : ";
				cin >> Cm;

				M = Cm / 100;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << M << " M" << endl;
				cout << "===========================" << endl;

				break;
			case 5:
				cout << "Cm ke Km\n";
				cout << "Masukan Cm : ";
				cin >> Cm;

				Km = Cm / 100000;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << Km << " Km" << endl;
				cout << "===========================" << endl;

				break;
			case 6:
				cout << "Cm ke Inci\n";
				cout << "masukan Cm : ";
				cin >> Cm;

				Inci = Cm * 0.39370;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah = " << Inci << " Imci" << endl;
				cout << "===========================" << endl;

				break;

			case 7:
				cout << "Km ke Meter\n";
				cout << "Masukan Km : ";
				cin >> Km;

				M = Km * 1000;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah : " << M << " M" << endl;
				cout << "===========================" << endl;

					break;
			case 8:
				cout << "Km ke Cm \n";
				cout << "Masukan Km : ";
				cin >> Km;

				Cm = Km * 100000;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah : " << Cm << " Cm" << endl;
				cout << "===========================" << endl;

				break;
			case 9:
				cout << "Km ke Inci \n";
				cout << "Masukan Km : ";
				cin >> Km;

				Inci = Km * 39.37007874;
				cout << "===========================" << endl;
				cout << "Hasilnya adalah : " << Inci << " Inci" << endl;
				cout << "===========================" << endl;
			default:
					break;
			}

		ulang1:
			cout << "apakah ingin mengulang?\n";
			cout << "1.yes\n";
			cout << "2.kembali ke menu awal" << endl;
			cout << "3.no\n";

			cin >> ulang;
			if (ulang == 1) {

				goto satuan;
			}
			else if (ulang == 2) {

				goto menu;
			}
			else if (ulang == 3) {
				return 0;
			}
			else {
				cout << "input salah.";
				system("pause");
				goto ulang1;
			}
		
	}
	else if (PIL == '3') {
		
			bangunruang:
			system("cls");
			int bgnrg;
			cout << "===========================" << endl;
			cout << "BANGUN DATAR\n";
			cout << "1. KELILING\n";
			cout << "2. LUAS\n";
			cout << "===========================" << endl;
			cin >> bgnrg;

			if (bgnrg == 1) {

				int kel1, seg, kel2, kel3, kel4, kell;
				double jwb;
				keliling:
				system("cls");
				string keliling[8] = { "===========================","KELILING","1. Persegi","2. Persegi Panjang", "3. Segitiga","4. Trapesium", "5. Lingkaran", "===========================" };
				for (int b = 0; b < 8; b++) {
					cout << keliling[b] << endl;
				}cin >> kell;

				switch (kell)
				{
				case 1:
					cout << "Masukan panjang sisi Persegi : ";
					cin >> kel1;
					jwb = 4 * kel1;
					cout << "===========================" << endl;
					cout << "Jawabannya adalah = " << jwb << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 2:
					cout << "Masukan panjang persegi panjang : ";
					cin >> kel1;
					cout << "Masukan lebar persegi panjang : ";
					cin >> kel2;
					jwb = 2 * (kel1 + kel2);
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 3:
					cout << "Masukan Sisi Segitiga : ";
					cin >> kel1;
					jwb = 3 * kel1;
					cout << "===========================" << endl;
					cout << "Jawabannya adalah = " << jwb << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 4:
					cout << "Masukan sisi trapesium (1): ";
					cin >> kel1;
					cout << "Masukan sisi trapesium (2): ";
					cin >> kel2;
					cout << "Masukan sisi trapesium (3): ";
					cin >> kel3;
					cout << "Masukan sisi trapesium (4): ";
					cin >> kel4;

					jwb = kel1 + kel2 + kel3 + kel4;
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 5:
					cout << "Masukan diameter lingkaran : ";
					cin >> kel1;

					jwb = 3.14 * kel1;
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb << " Cm" << endl;
					cout << "===========================" << endl;
				default:
					break;
				}
			ulang2:
				cout << "apakah ingin mengulang?\n";
				cout << "1.yes\n";
				cout << "2.kembali ke menu awal\n";
				cout << "3.kembaki ke bangun datar\n";
				cout << "4.no\n";

				cin >> ulang;
				if (ulang == 1) {

					goto keliling;
				}
				else if (ulang == 2) {

					goto menu;
				}
				else if (ulang == 3) {

					goto bangunruang;
				}
				else if (ulang == 4) {
					return 0;
				}
				else {
					cout << "input salah.";
					system("pause");
					goto ulang2;
				}
				
			
			}

			else if (bgnrg == 2) {
				int kel5, kel6, kel7, kel8, lua;
				double jwb1,jwb2;
				luas:
				system("cls");
				string luas[8] = { "===========================","LUAS","1. Persegi","2. Persegi Panjang", "3. Segitiga","4. Trapesium", "5. Lingkaran", "===========================" };
				for (int b = 0; b < 8; b++) {
					cout << luas[b] << endl;
				}cin >> lua;

				switch (lua)
				{
				case 1:
					cout << "Masukan panjang sisi pesegi : ";
					cin >> kel5;
					jwb1 = kel5 * kel5;
					cout << "===========================" << endl;
					cout << "Jawabannya adalah = " << jwb1 << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 2:
					cout << "Masukan 'panjang' persegi panjang : ";
					cin >> kel5;
					cout << "Masukan 'lebar' persegi panjang : ";
					cin >> kel6;

					jwb1 = kel5 * kel6;
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb1 << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 3:
					cout << "Masukan alas segitiga : ";
					cin >> kel5;
					cout << "Masukan tinggi segitiga : ";
					cin >> kel6;

					jwb1 = 0.5 * (kel5 * kel6);
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb1 << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 4:
					cout << "Msukan sisi 'a' trapesium : ";
					cin >> kel5;
					cout << "Masukan sisi 'b' trapesium : ";
					cin >> kel6;
					cout << "Masukan tinggi trapesium : ";
					cin >> kel7;

					jwb1 = 0.5 * (kel5 + kel6) * kel7;
					cout << "===========================" << endl;
					cout << "Hasilnya adalah = " << jwb1 << " Cm" << endl;
					cout << "===========================" << endl;
					break;
				case 5:
					cout << "Masukan Jari - jari lingkaran : ";
					cin >> kel5;

					int a, b;
					b = 7;
					for (a = 0; a < 100; a++) {
						b = b + 7;
					}

					if (kel5 == 7 || kel5 == 14 || kel5 == 21 || kel5 == 28 || kel5 == 35 || kel5 == 42 || kel5 == 49 || kel5 == 56 || kel5 == 63 || kel5 == 70 || kel5 == 77 || kel5 == 84 || kel5 == 91 || kel5 == 98 || kel5 == 105 || kel5 == 112 || kel5 == 119 || kel5 == 126 || kel5 == 133 || kel5 == 140 || kel5 == 147 || kel5 == 154 || kel5 == 161 || kel5 == 168 || kel5 == 175) {
						jwb2 = (22 / 7) * kel5 * kel5;
						cout << "hasilnya adalah (22/7) = " << jwb2 << " Cm" << endl;
						cout << "==============================" << endl;
					}
					else {
						jwb1 = 3.14 * (kel5 * kel5);
						cout << "hasilnya adalah (3,14) = " << jwb1 << " Cm" << endl;
						cout << "==============================" << endl;
				default:
					break;
					}
				}
			ulang3:
				cout << "apakah ingin mengulang?\n";
				cout << "1.yes\n";
				cout << "2.kembali ke menu awal\n";
				cout << "3.kembali ke bangun ruang\n";
				cout << "4.no\n";

				cin >> ulang;
				if (ulang == 1) {

					goto luas;
				}
				else if (ulang == 2) {

					goto menu;
				}
				else if (ulang == 3) {

					goto bangunruang;
				}
				else if (ulang == 4) {
					return 0;
				}
				else {
					cout << "input salah.";
					system("pause");
					goto ulang3;
				}
			}
		
	}
}
//lingkaran bisa menggunakan 22/7 dan 3.14 secara bersamaan dengan user menginput angka 