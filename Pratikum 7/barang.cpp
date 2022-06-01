#include <iostream>
#include <iomanip>
using namespace std;

class barang{
    public:
    void input(){
      cout<<"======================================="<<endl;
	    cout<<"STUDI KASUS 7 : Sorting dan Searching "<<endl;
	    cout<<"======================================="<<endl;
      cout<<"Masukkan banyak jenis barang : ";cin>>n;
        for (int i=0; i<n; i++){
            cout<<"---------------------------------------"<<endl;
            cout<<"Masukkan Id barang "<<i+1<<" : ";cin>>id[i];
	          cout<<"Masukkan nama barang "<<i+1<<" : ";cin>>nama[i];
	          cout<<"Masukkan jumlah stok barang "<<i+1<<" : ";cin>>stok[i];
        }
	    cout<<"======================================="<<endl;
    }

    void proses(){
      //fitur sorting
        for (int i = 0; i<n; i++){
		      for (int j = 0; j<n-1; j++){
			      if (stok[j] < stok[j+1]){
			    	  tukarid = id[j];
 			    	  id[j] = id[j+1];
 			    	  id[j+1] = tukarid;
              tukarnama = nama[j];
 			    	  nama[j] = nama[j+1];
 			    	  nama[j+1] = tukarnama;
              tukarstok = stok[j];
 			    	  stok[j] = stok[j+1];
 			    	  stok[j+1] = tukarstok;
			      }  
		      }
	      }
    }

    void output(){
        cout<<"================================================="<<endl;
        cout<<"|  Id Barang  |   Nama Barang   |  Stok Barang  |"<<endl;
        cout<<"================================================="<<endl;
        for(int i=0; i<n; i++){
            cout<<"|    ";
            cout<<setiosflags(ios::left)<<setw(8)<<id[i]<<"       ";
			      cout<<setiosflags(ios::left)<<setw(12)<<nama[i]<<"       ";
			      cout<<setiosflags(ios::left)<<setw(4)<<stok[i]<<"     |"<<endl;
        }
        cout<<"================================================="<<endl;
        cout<<"Masukkan Id barang yang ingin anda cari : ";cin>>cari;
        //fitur searching
        int k=0;
        for (int i=0; i<n; i++){
            if(id[i]==cari){
                cout<<"================================================="<<endl;
                cout<<"|  Id Barang  |   Nama Barang   |  Stok Barang  |"<<endl;
                cout<<"================================================="<<endl;
                    cout<<"|    ";
                    cout<<setiosflags(ios::left)<<setw(8)<<id[i]<<"       ";
			              cout<<setiosflags(ios::left)<<setw(12)<<nama[i]<<"       ";
			              cout<<setiosflags(ios::left)<<setw(4)<<stok[i]<<"     |"<<endl;
                cout<<"================================================="<<endl;
                k++;//k di increment
                break;
            }
        }
        if(k==0){
          cout<<"Barang tidak ditemukan !";
        }
    }

    private:
    int n, cari;
    int id[99], stok[99];
    int tukarstok, tukarid;
    string nama[99];
    string tukarnama;
};
int main(){
	barang x;
    x.input();
    x.proses();
    x.output();
}
