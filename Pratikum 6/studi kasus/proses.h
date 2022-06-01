using namespace std;

class Proses
{
public:
	void getData(){
		ambil_data.open("nilai.txt");
		bool name = true;
		bool matku = true;
		bool bnyk = true;
		while(!ambil_data.eof()){
			if(name){
				ambil_data>> nama;
				name = false;
			}
			else if(matku){
				ambil_data>>matkul;
				matku = false;
			}
			else if(bnyk){
				ambil_data >> n;
				bnyk = false;
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
    void algoritma(){
        //algoritma mencari nilai max dan min
	    Nmin=nilai[0],    Nmax=nilai[0];
	    for(int j=0; j<n; j++){
	    	if(nilai[j]<Nmin){
	    		Nmin = nilai[j]; } 
	    	if(nilai[j]>Nmax){
	    		Nmax = nilai[j]; }}
	    //algoritma mencari nilai rata-rata
	    for(int i=0; i<n; i++){
	    	rata+=nilai[i];
    	    }
    	    rata/=n;
    }
    
    void toFile(){
		tulis_data.open("nilai.txt");
		tulis_data << nama << endl;
		tulis_data << matkul << endl;
		tulis_data << n << endl;
		tulis_data << Nmin<< endl;
		tulis_data << Nmax << endl;
        tulis_data << rata << endl;
		for (int i=0; i<n; i++){
			tulis_data << nilai[i] << endl;
		}
		tulis_data.close();
	}

private:
    ifstream ambil_data;
    ofstream tulis_data;
    string nama, matkul;
    int nilai[50];
    int n;
    int Nmin, Nmax;
    float rata;
};
