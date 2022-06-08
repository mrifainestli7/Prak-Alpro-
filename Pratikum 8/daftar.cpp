#include <iostream>
#include <iomanip>
using namespace std;

class dalam{
    public:
    void input(){
        cout<<"================================================"<<endl;
	      cout<<"        STUDI KASUS 8 : Array dua dimensi "<<endl;
	      cout<<"================================================"<<endl;
        cout<<"\n*)Tabel : "<<endl;
        cout<<"================================================"<<endl;
        cout<<"|     Nama     |     Stok      |  Harga satuan |"<<endl;
        cout<<"================================================"<<endl;
        for(int i=0; i<5; i++){
            cout<<"|   ";
            cout<<setiosflags(ios::left)<<setw(10)<<nama[i]<<" |";
            for(int j=0; j<2; j++){
                cout<<"      ";
                cout<<setiosflags(ios::left)<<setw(9)<<data[i][j]<<"|";
            }
            cout<<endl;
        }
         cout<<"================================================"<<endl;
    }
    void proses(){
        sub=1;
        for(int i=0; i<5; i++){
            for(int j=0; j<2; j++){
                sub*=data[i][j];
            }
            total+=sub;
            sub=1;
        }
    }
    void output(){
        cout<<"\n*)Tabel dengan total : "<<endl;
        cout<<"================================================"<<endl;
        cout<<"|     Nama     |     Stok      |  Harga satuan |"<<endl;
        cout<<"================================================"<<endl;
        for(int i=0; i<5; i++){
            cout<<"|   ";
            cout<<setiosflags(ios::left)<<setw(10)<<nama[i]<<" |";
            for(int j=0; j<2; j++){
                cout<<"      ";
                cout<<setiosflags(ios::left)<<setw(9)<<data[i][j]<<"|";
            }
            cout<<endl;
        }
        cout<<"------------------------------------------------"<<endl;
        cout<<"|                            Total : "<<total<<"   |"<<endl;
        cout<<"================================================"<<endl;
    }
    private:
    int data[5][2]={{5,130000},{8,200000},{17,231000},{2,190000},{1,141000}};
    string nama[5]={"Logitech","Microsoft","Apple","Philips","Dell"};
    int sub;
    int total;
};  
int main(){
    dalam x;
    x.input();
    x.proses();
    x.output();
}
