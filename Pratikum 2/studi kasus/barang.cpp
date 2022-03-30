#include <iostream>
#include <iomanip>
using namespace std;

main ()
{
	int jmlh[100], harga[100], total[100];
	string nama[100];
	int pil;
	int i=0;
	cout<<"                Program Kasir"<<endl;
	do {
		system ("CLS");
		cout<<"=============================================="<<endl;
		cout<<"PILIHAN MENU : "<<endl;
		cout<<" 1) Masukkan barang belanja"<<endl;
		cout<<" 2) Bayar dan tampilkan output"<<endl;
		cout<<"=============================================="<<endl;
		cout<<"Masukkan pilihan menu = ";
		cin>>pil;
		cout<<"=============================================="<<endl;
		if (pil==1){
			cout<<"\nMasukkan nama barang          = ";
	        	cin.ignore();
	        	getline(cin, nama[i]);
			cout<<"Masukkan jumlah barang        = ";
			cin>>jmlh[i];
			cout<<"Masukkan harga satuan barang  = ";
    			cin>>harga[i];
			total[i]=jmlh[i]*harga[i];
	        	i++;
		}
		else if (pil==2){
			int Sub=0, kembalian=0;
			int bayar;
			system ("CLS");
			cout<<"--------------------------------------------"<<endl;
			cout<<"Deskripsi            QTY   Harga    Total"<<endl;
			cout<<"--------------------------------------------"<<endl;
			for (int j=0;j<i;j++){		    
				cout<<setiosflags(ios::left)<<setw(20)<<nama[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(5)<<jmlh[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(8)<<harga[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(15)<<total[j]<<" ";
				Sub+=total[j];
				cout<<endl;
			}
			cout<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"              Sub total belanjaan = "<<Sub<<endl;
			cout<<"                     Jumlah bayar = ";cin>>bayar;
			kembalian=bayar-Sub;
			system ("CLS");
			cout<<"============================================"<<endl;
			cout<<"               Struk Belanjaan      "<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"Deskripsi            QTY   Harga    Total"<<endl;
			cout<<"============================================"<<endl;
			for (int j=0;j<i;j++){
				cout<<setiosflags(ios::left)<<setw(20)<<nama[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(8)<<jmlh[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(5)<<harga[j]<<" ";
				cout<<setiosflags(ios::left)<<setw(15)<<total[j]<<" ";
				cout<<endl;
	        	}
			cout<<"--------------------------------------------"<<endl;                                                    
	        	cout<<"              Sub total belanjaan = "<<Sub<<endl;
	        	cout<<"                     Jumlah bayar = "<<bayar<<endl;
	        	cout<<"                        Kembalian = "<<after<<endl;
	        	cout<<"============================================"<<endl;
			system ("PAUSE");
		}
	}
	while (pil!=2);
}
