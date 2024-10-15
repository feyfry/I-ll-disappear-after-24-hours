#include <iostream>
using namespace std;

int main(){
	
	int jamKerja, totalGaji, upah = 5000, kelebihanUpah = 7500, potongan = 2500;
	
	cout << endl << "Masukkan Waktu Kerja: ";
	cin >> jamKerja;
	
	if (jamKerja < 50){
		totalGaji = jamKerja * upah - (potongan * 10) ;
		cout << "Total Gaji: " << totalGaji << endl;
	}
	else if (jamKerja > 60){
		totalGaji = (upah*60) + ((jamKerja - 60) * kelebihanUpah);
		cout << "Total Gaji: " << totalGaji << endl;
	}
	else if (jamKerja >= 50 && jamKerja <= 60){
		totalGaji = jamKerja * upah;
		cout << "Total Gaji: " << totalGaji << endl;
	}
	
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	float berat, tinggi, imt;
//	
//	cout << endl << "Berat Badan: ";
//	cin >> berat;
//	cout << "Tinggi Badan: ";
//	cin >> tinggi;
//	
//	imt = berat / ((tinggi / 100) * (tinggi / 100));
//	
//	if (imt < 19 ){
//		cout << endl << "Kelompok Kurus" << endl;
//	}
//	else if (imt >= 19 && imt <= 24.9){
//		cout << endl << "Kelompok Ideal" << endl;
//	}
//	else if (imt >= 25 && imt <= 29.9){
//		cout << endl << "Kelompok Kelebihan Berat Badan (Gemuk)" << endl;
//	}
//	else if (imt >= 30){
//		cout << endl << "Kelompok Obesitas" << endl;
//	}
//	
//	return 0;
//}
