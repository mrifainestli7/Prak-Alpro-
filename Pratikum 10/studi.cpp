#include <iostream>
#include <iomanip>
using namespace std;

class node{
    public:
    string nama;
	int nim;
    node *berikut;
};

class prosedur{
	public:
		node *pertama, *kedua, *ketiga, *keempat, *kelima;
		void input(){
        cout<<"======================================="<<endl;
	    	cout<<"      STUDI KASUS 10 : Pointer "<<endl;
	    	cout<<"======================================="<<endl;
   			pertama = new node;
    		cout<<"Nama mahasiswa pertama : ";cin>>Satu;
    		cout<<"NIM : ";cin>>satu;
    		pertama -> nama = Satu;
    		pertama -> nim = satu;
    		pertama -> berikut = NULL;
        	cout<<endl;
    		
    		kedua = new node;
    		cout<<"Nama mahasiswa kedua : ";cin>>Dua;
    		cout<<"NIM : ";cin>>dua;
    		kedua -> nama = Dua;
    		kedua -> nim = dua;
    		kedua -> berikut = NULL;
    		cout<<endl;
      
    		ketiga = new node;
    		cout<<"Nama mahasiswa ketiga : ";cin>>Tiga;
    		cout<<"NIM : ";cin>>tiga;
    		ketiga -> nama = Tiga;
    		ketiga -> nim = tiga;
    		ketiga -> berikut = NULL;
        	cout<<endl;
    		
    		keempat = new node;
    		cout<<"Nama mahasiswa keempat : ";cin>>Empat;
    		cout<<"NIM : ";cin>>empat;
    		keempat -> nama = Empat;
    		keempat -> nim = empat;
    		keempat -> berikut = NULL;
        	cout<<endl;
    		
    		kelima = new node;
    		cout<<"Nama mahasiswa kelima : ";cin>>Lima;
    		cout<<"NIM : ";cin>>lima;
    		kelima -> nama = Lima;
    		kelima -> nim = lima;
    		kelima -> berikut = NULL;
        	cout<<endl;
        	cout<<"======================================="<<endl<<endl;
		}
		void proses(){ //proses penyambungan pointer
			pertama -> berikut = kedua;
			kedua -> berikut = ketiga;
			ketiga -> berikut = keempat;
			keempat -> berikut = kelima;
		}
		void output(){
			node *jalan = pertama;
			int i=1;
      		cout<<"================================="<<endl;
      		cout<<"| No |    Nama    |     NIM     |"<<endl;
      		cout<<"================================="<<endl;
			while(jalan !=NULL){
        		cout<<"| "<<setiosflags(ios::left);
        		cout<<setw(3)<<i<<"| ";
		    	cout<<setw(10)<<jalan->nama<<" | ";
		    	cout<<setw(11)<<jalan->nim<<" |"<<endl;
				jalan = jalan->berikut;
				i++;
    		}
      		cout<<"================================="<<endl;
		}
	private:
		string Satu, Dua, Tiga, Empat, Lima;
		int satu, dua, tiga, empat, lima;
};
           
int main(){
  	prosedur x;
  	x.input();
  	x.proses();
  	x.output();
    return 0;
}
