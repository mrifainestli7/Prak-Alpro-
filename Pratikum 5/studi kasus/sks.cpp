#include <iostream>
#include <iomanip>
using namespace std;

class sks {
	public :
	void input();
	void proses();
	int rekursif(int j, int i);
	void output();
	private:
	string a [20];
	string nama;
	int  b[20];
	int hsks=12000;
	int bykA, i, nim; 	
	float total,jumlah, diskonsatu, diskondua;
};

void sks::input(){
	cout<<"======================================="<<endl;
	cout<<"STUDI KASUS 5 : Penginputan SKS "<<endl;
	cout<<"======================================="<<endl;
	cout<<"Masukkan banyak Mata Kuliah : ";cin>>bykA;
	cout<<"---------------------------------------"<<endl;
	for(i=0; i<bykA; i++){  
		cout<<"Masukkan Mata kuliah " <<i+1<<" : ";
		cin.ignore();  
		getline(cin, a[i]);	
		cout<<"Masukkan SKS : ";
		cin>>b[i];
		cout<<"---------------------------------------"<<endl;
	}
	cout<<"Masukkan Nama : ";
	cin.ignore();getline(cin, nama);
	cout<<"Masukkan NIM  : ";cin>>nim;
	cout<<"======================================="<<endl;
}

int sks::rekursif(int j, int i){
	if(i<0){
		return i;
	}
	else{
		jumlah+=b[i];
		total+=hsks*b[i];
		return rekursif(j,(i-1));
	}
}

void sks::proses() {
	int j=1;
	i--;
	rekursif(j,i);
	diskonsatu=total*0.10;
	diskondua=total*0.05;
	total=total-diskonsatu;
	total=total-diskondua;
}

void sks::output(){
	cout<<"======================================="<<endl;
	cout<<"Nama	: "<<nama<<endl;
	cout<<"NIM 	: "<<nim<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"      Mata Kuliah         SKS"<<endl;
	cout<<"---------------------------------------"<<endl;
	for(i=0;i<bykA;i++){
		cout<<" ";
		cout<<setiosflags(ios::left)<<setw(25)<<a[i]<<" ";
		cout<<setiosflags(ios::left)<<setw(2)<<b[i]<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"              Jumlah SKS : "<<jumlah<<endl;
	cout<<"        Total Pembayaran : "<<total<<endl;
	cout<<"======================================="<<endl;
}

int main() {
	sks a;
	a.input();
	a.proses();
	a.output();
}
