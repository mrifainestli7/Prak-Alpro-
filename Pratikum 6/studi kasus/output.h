using namespace std;

class Output{
public:
	void getData(){
		ambil_data.open("nilai.txt");
		bool name = true;
		bool matku = true;
		bool bnyk = true;
		bool min = true;
        bool max = true;
        bool avg = true;
		while(!ambil_data.eof()){
			if(name){
				ambil_data >> nama ;
				name = false;
			}
			else if(matku){
				ambil_data >> matkul;
				matku = false;
			}
			else if(bnyk){
				ambil_data >> n;
				bnyk = false;
			}
			else if(min){
				ambil_data>>Nmin;
				min = false;
			}
			else if (max){
				ambil_data >> Nmax;
				max = false;
			}
            else if (avg){
				ambil_data >> rata;
				avg = false;
			}
			else{
				for (int i = 0; i < n; i++)
				{
					ambil_data>> nilai[i];
				}
			}
		}
		ambil_data.close();
	}

	void cetak(){
		cout<<"\n====================="<<endl;
	    cout<<"Nama Dosen : "<<nama<<endl;
	    cout<<"Matkul     : "<<matkul<<endl;
	    cout<<"---------------------"<<endl;
	    cout<<" Nilai "<<endl;
	    cout<<"---------------------"<<endl;
	    for(int i=0; i<n; i++){
	    	cout<<"  "<<nilai[i]<<endl;
    	}
    	cout<<"---------------------"<<endl;
	    cout<<"      Nilai min : "<<Nmin<<endl;
	    cout<<"      Nilai max : "<<Nmax<<endl;
	    cout<<"Nilai rata-rata : "<<rata<<endl;
    	cout<<"====================="<<endl;
    	}

private:
	ifstream ambil_data;
	string nama, matkul;
    int nilai[50];
    int n;
    int Nmin, Nmax;
	float rata;
};