#include <iostream>
#include <iomanip>
using namespace std;
class operasi{
	public:
		void hitung(int uang_saku);
		void tabel();
	private:
		int uang_saku;
		int out[12];
   		int tabungan=0, total=0;
};

void operasi::hitung(int uang_saku){
	for (int i=0;i<=11;i++){
		cout<<"masukkan pengeluaran bulan ke-"<<i+1<<" : ";cin>>out[i];
        tabungan+=uang_saku-out[i];
        total+=out[i];
        cout<<"| Bulan | Uang saku | Pengeluaran | total Pengeluaran |   Tabungan|"<<endl;
        cout<<"|";
        cout<<setiosflags(ios::right)<<setw(4)<<i+1<<"   | ";	
        cout<<setiosflags(ios::right)<<setw(9)<<uang_saku<<" | ";			
        cout<<setiosflags(ios::right)<<setw(11)<<out[i]<<" | ";
		cout<<setiosflags(ios::right)<<setw(17)<<total<<" | ";
		cout<<setiosflags(ios::right)<<setw(10)<<tabungan<<"|"<<endl<<endl;                                             
	}
}

int main (){
	operasi x;
	int uang_saku;
	cout<<"Masukkan uang saku anda tiap bulan : ";cin>>uang_saku;
	x.hitung(uang_saku);
}

