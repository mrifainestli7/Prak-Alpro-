using namespace std;

class Input {
	public :
		void cetak(){ //menampilkan menu dan memasukkan jumlah pesanan dari setiap item
		cout << "Restoran keluarga "<<endl;
		cout << "Menu yang tersedia : "<<endl;
		cout << "1) Ayam Geprek  Rp. 21000 "<<endl;
                cout << "2) Ayam Goreng  Rp. 17000 "<<endl;
                cout << "3) udang Goreng  Rp. 19000 "<<endl;
                cout << "4) cumi Goreng  Rp. 20000 "<<endl;
		cout << "5) Ayam Bakar   Rp. 25000 "<<endl;
                cout << "Pesan Ayam Geprek  -> "; cin >> bnyk_aymGp;
		cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymGr;
                cout << "Pesan udang Goreng -> "; cin >> bnyk_udgG;
                cout << "Pesan cumi Goreng  -> "; cin >> bnyk_cuG;
		cout << "Pesan Ayam Bakar   -> "; cin >> bnyk_aymBk;
		cout<<"\nMasukkan jarak rumah pelanggan (KM): ";cin >> jarak;
		}

		void toFile(){ //menulis data ke file eksternal data.txt
		tulis_data.open("data.txt");
		tulis_data << jarak << endl;
		tulis_data << bnyk_aymGp << endl;
                tulis_data << bnyk_aymGr << endl;
                tulis_data << bnyk_udgG << endl;
                tulis_data << bnyk_cuG << endl;
		tulis_data << bnyk_aymBk;
		tulis_data.close();
		}

	private : //deklarasi dalam class input
		ofstream tulis_data;
		int jarak;
		int bnyk_aymGr, bnyk_aymBk, bnyk_aymGp;
                int bnyk_udgG, bnyk_cuG;
};
