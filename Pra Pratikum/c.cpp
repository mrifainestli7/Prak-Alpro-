#include <iostream>
using namespace std;

int input(float &x, float &y) {
	cout<<"Bilangan Pertama: ";cin>>x;
	cout<<"Bilangan Kedua: ";cin>>y;
}
float menuTambah(float x, float y) {
	float hasil;
	hasil = x+y;
	cout<<"Hasil "<<x<<" + "<<y<<" = "<<hasil<<endl;
}

float menuKurang(float x, float y) {
	float hasil;
	hasil = x-y;
	cout<<"Hasil "<<x<<" - "<<y<<" = "<<hasil<<endl;
}

float menuKali(float x, float y) {
	float hasil;
	hasil = x*y;
	cout<<"Hasil "<<x<<" X "<<y<<" = "<<hasil<<endl;
}

float menuBagi(float x, float y) {
	float hasil;
	hasil = x/y;
	cout<<"Hasil "<<x<<" / "<<y<<" = "<<hasil<<endl;
}

int main(){
	int pil;
	float x, y;
	float hasil;
	do{
	system("CLS");
	cout<<" PROGRAM KALKULATOR"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"  1. Penambahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"  5. Keluar Program"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Pilih Menu No : ";cin>>pil;
	input(x,y);
	if(pil == 1) {
		menuTambah(x,y);
		system("PAUSE");
	}
	else if(pil == 2) {
		menuKurang(x,y);
		system("PAUSE");
	}
	else if(pil == 3) {
		menuKali(x,y);
		system("PAUSE");
	}
	else if(pil == 4) {
		menuBagi(x,y);
		system("PAUSE");
	}
    }
    while (pil != 5);
}
