using namespace std;

class Proses {
	public :
		void getData(){
			ambil_data.open("data.txt");
            bool jara_k = true;
            bool ayam_geprek = true;
			bool ayam_goreng = true;
            bool udang_goreng = true;
            bool cumi_goreng = true;
			while(!ambil_data.eof()){
                if (jara_k){
                    ambil_data >> jarak;
					jara_k = false;
                }
				else if (ayam_geprek){
					ambil_data >> bnyk_aymGp;
					ayam_geprek = false;
				}
                else if (ayam_goreng){
					ambil_data >> bnyk_aymGr;
					ayam_goreng = false;
				}
                else if (udang_goreng){
					ambil_data >> bnyk_udgG;
					udang_goreng = false;
				}
                else if (cumi_goreng){
					ambil_data >> bnyk_cuG;
					cumi_goreng = false;
				}
				else{
					ambil_data >> bnyk_aymBk;
				}
			}
			ambil_data.close();
		}

		void toFile(){

            if (jarak<3){
                ongkir=15000;
            }
            else {
                ongkir=25000;
            }

			int total = (hrg_aymGr * bnyk_aymGr) + (hrg_aymBk * bnyk_aymBk) + (hrg_aymGp * bnyk_aymGp) + (hrg_udgG * bnyk_udgG) + (hrg_cuG * bnyk_cuG);
			float t2 = float(total);

            if ((total>=25000) && (total<50000)){
                ongkir=ongkir-3000;
            }
            else if((total>=50000) && (total<150000)){
                ongkir=ongkir-5000;
                diskon = t2 * 0.15;
            }
            else if(total>=150000){
                ongkir=ongkir-8000;
                diskon = t2 * 0.35;
            }
            else{
                diskon = 0;
            }

            t2 = t2 + ongkir;
			t2 = t2 - diskon;

			tulis_data.open("data.txt");
			tulis_data << total << endl;
            tulis_data << ongkir << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
            tulis_data << bnyk_aymGp << endl;
			tulis_data << bnyk_aymGr << endl;
            tulis_data << bnyk_udgG << endl;
            tulis_data << bnyk_cuG << endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
        float diskon;
        int ongkir, jarak;
        int bnyk_aymGp;
		int bnyk_aymGr;
        int bnyk_udgG;
        int bnyk_cuG;
		int bnyk_aymBk;
		int hrg_aymGp = 21000;
        int hrg_aymGr = 17000;
        int hrg_udgG = 19000;
        int hrg_cuG = 20000;
        int hrg_aymBk = 25000;
};