#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
 
int main (){
	int pil ,kx;
	int total, jmlh;
	int hargag=17000, hargab=21000;
	int jmlhb=0, jmlhg=0;
	int totalg=0, totalb=0;
	string ayamg="Ayam goreng ", ayamb="Ayam bakar";
	int diskon=0;
	do{
	system ("CLS");
	cout<<"======================"<<endl;
	cout<<" Pilih menu : "<<endl;
	cout<<"1). Ayam goreng"<<endl;
	cout<<"2). Ayam bakar"<<endl;
	cout<<"======================"<<endl;
	cout<<"Masukkan pilihan : ";cin>>pil;
	cout<<"======================"<<endl;
	if (pil==1){
		cout<<"Jumlah porsi ayam goreng  : ";cin>>jmlh;
		totalg+=hargag*jmlh;
		jmlhg+=jmlh;
	}
	else if (pil==2){
		cout<<"Jumlah porsi ayam bakar : ";cin>>jmlh;
		totalb+=hargab*jmlh;
		jmlhb+=jmlh;
	}
	system ("CLS");
	cout<<"======================"<<endl;
	cout<<" Pilih menu : "<<endl;
	cout<<"1). Kembali pilih menu"<<endl;
	cout<<"2). Keluar dan cetak struk"<<endl;
	cout<<"======================"<<endl;
	cout<<"Masukkan pilihan : ";cin>>kx;
	cout<<"======================"<<endl;
	}
	while (kx==1);
	total=totalb+totalg;
	if(total>45000){
		diskon=total*0.1;
		total=total-diskon;
	}
	system ("CLS");
	cout<<"================================"<<endl;	
	cout<<"         Daftar Pesanan"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Deskripsi    QTY  Harga Total"<<endl;
	cout<<"================================="<<endl;
	cout<<setiosflags(ios::left)<<setw(13)<<ayamg<<" ";
	cout<<setiosflags(ios::left)<<setw(3)<<jmlhg<<" ";
	cout<<setiosflags(ios::left)<<setw(5)<<hargag<<" ";
	cout<<setiosflags(ios::left)<<setw(5)<<totalg<<" ";
	cout<<endl;
	cout<<setiosflags(ios::left)<<setw(13)<<ayamb<<" ";
	cout<<setiosflags(ios::left)<<setw(3)<<jmlhb<<" ";
	cout<<setiosflags(ios::left)<<setw(5)<<hargab<<" ";
	cout<<setiosflags(ios::left)<<setw(5)<<totalb<<" ";
	cout<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"               Diskon : "<<diskon<<endl;
	cout<<"           Sub total  : "<<total<<endl;
	cout<<"================================="<<endl;
	cout<<"Struk berhasil dibuat....."<<endl;
	cout<<"================================="<<endl;
	fstream poin;
		poin.open("Struk.txt",ios::out | ios::in | ios::trunc );
		poin<<"================================"<<endl;
		poin<<"         Struk Pesanan"<<endl;
		poin<<"---------------------------------"<<endl;
		poin<<"Deskripsi    QTY  Harga Total"<<endl;
		poin<<"================================="<<endl;
		poin<<setiosflags(ios::left)<<setw(13)<<ayamg<<" ";
		poin<<setiosflags(ios::left)<<setw(3)<<jmlhg<<" ";
		poin<<setiosflags(ios::left)<<setw(5)<<hargag<<" ";
		poin<<setiosflags(ios::left)<<setw(5)<<totalg<<" ";
		poin<<endl;
		poin<<setiosflags(ios::left)<<setw(13)<<ayamb<<" ";
		poin<<setiosflags(ios::left)<<setw(3)<<jmlhb<<" ";
		poin<<setiosflags(ios::left)<<setw(5)<<hargab<<" ";
		poin<<setiosflags(ios::left)<<setw(5)<<totalb<<" ";
		poin<<endl;
		poin<<"---------------------------------"<<endl;
		poin<<"               Diskon : "<<diskon<<endl;
		poin<<"           Sub total  : "<<total<<endl;
		poin<<"================================="<<endl;
        poin.close();
}
