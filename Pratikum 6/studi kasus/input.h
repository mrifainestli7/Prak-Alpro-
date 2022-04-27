using namespace std;

class Input{
public:
	void cetak(){
		cout<<"======================================="<<endl;
	    cout<<"STUDI KASUS 6 : Penginputan Nilai "<<endl;
	    cout<<"======================================="<<endl;
	    cout<<"Masukkan Nama Mata Kuliah : ";cin>>matkul;
	    cout<<"Masukkan Nama Dosen       : ";cin>>nama;
	    cout<<"Masukkan berapa banyak nilai : ";cin>>n;
	    cout<<"---------------------------------------"<<endl;
	    for(int i=0; i<n; i++){
		cout<<"Masukkan nilai siswa ke-"<<i+1<<" = ";cin>>nilai[i];
	    }
	    cout<<"======================================="<<endl;
	}

	void toFile (){
		tulis_data.open("nilai.txt");
		tulis_data <<nama<< endl;
		tulis_data <<matkul<< endl;
		tulis_data <<n<< endl;
		for (int i=0; i<n; i++){
			tulis_data << nilai[i] << endl;
		}
		tulis_data.close();
	}
private:
    string nama, matkul;
    int nilai[50];
    int n;
	ofstream tulis_data;
};