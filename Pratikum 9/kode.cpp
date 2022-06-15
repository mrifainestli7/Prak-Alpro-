#include <iostream>
#include <iomanip>
using namespace std;

class kode{
	public: 
		void input(){
			cout<<"================================================"<<endl;
	  	cout<<"       STUDI KASUS 9 : Array 1 & 2 dimensi "<<endl;
	  	cout<<"================================================"<<endl;
	    for (i=0; i<24; i++){
	  		cout<<"Masukkan kode buku ke-"<<i+1<<" : ";
	  		cin>>c[i];
		  }
			cout<<endl;
		}
		void proses(){
			for (i=0; i<24; i++){ //algoritma sorting bubble sort
				for (j=0; j<24-1; j++){
					if (c[j] > c[j+1]){
	      		tukar=c[j];
	      		c[j]=c[j+1];
	          c[j+1]=tukar;
					}
				}
			}
			k=0;
			for(i=0; i<4; i++){ //proses pengkoversian array 1 dimensi menjadi 2 dimensi
				for(j=0; j<6; j++){
					a[i][j]=c[k];
					k++;
				}
			}
		}
		void output(){
			cout<<"========================="<<endl;
      cout<<"| Kode Buku | Nomor Rak |"<<endl;
      cout<<"========================="<<endl;
      cout<<"-------------------------"<<endl;
      for(i=0; i<4; i++){
  			for(j=0; j<6; j++){
	  			cout<<"|    ";
		  		cout<<setiosflags(ios::left)<<setw(6)<<a[i][j]<<" |     ";
			  	cout<<setw(6)<<i+1<<"|"<<endl;
			  }
			  cout<<"-------------------------"<<endl;
		  }
			cout<<"========================="<<endl;
		}
	private:
		int a[4][6];
		int c[24];
		int i,j,k,tukar;
	
};
int main(){
	kode x;
	x.input();
	x.proses();
	x.output();
}
