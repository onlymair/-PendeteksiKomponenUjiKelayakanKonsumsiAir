#include <iostream>
#include <string>
using namespace std;
void PengecekanParameter(double SuhuUdara, double Warna, double Keruh, string Rasa, string Bau, double KandunganTerlarut, double pH, double kadarNitrat, double kadarNitrit, double kadarBakteri, double Arsenic, double Timbal, double Kromium, double Merkuri){
    cout << "\nRingkasan Parameter Fisik" << endl; 
    cout << "===========================" << endl;
	if (SuhuUdara <= 3){
		cout << "Suhu udara: Aman";
	} else {
		cout << "Suhu Udara: Tidak aman";
	} 
	cout << endl;
	if (Warna <= 10){
		cout << "Kondisi warna: Aman";
	} else {
		cout << "Kondisi Warna: Tidak Aman";
	}
	cout << endl;
	if (Keruh <= 3){
		cout << "Tingkat kekeruhan: Aman";
	} else {
		cout << "Tingkat kekeruhan: Tidak Aman";
	}
	cout << endl;
	if (Rasa == "Tidak"){
		cout << "Rasa: Aman";
	} else {
		cout << "Rasa: Tidak Aman";
	}
	cout << endl;
	if (Bau == "Tidak"){
		cout << "Bau: Aman";
	} else {
		cout << "Bau: Tidak Aman";
	}
	cout << endl;
	if (KandunganTerlarut < 300){
		cout << "Kandungan terlarut: Aman";
	} else {
		cout << "Kandungan terlarut: Tidak Aman";
	}
	cout << endl;
	if(SuhuUdara <= 3 && Warna <= 10 && Keruh <= 3 && Rasa == "Tidak" && Bau == "Tidak" && KandunganTerlarut < 300){
	    cout << "==== Parameter Fisik Terdeteksi Aman ====\n";
	} else {
      	cout << "==== Parameter Fisik Tetdeteksi Tidak Aman ====\n";
      	cout << "\nLangkah Pencegahan:" << endl;
    	cout << "1. Lakukan penyaringan" << endl;
    	cout << "2. Rebus air hingga mendidih";
  	}
    	cout << endl;
    	cout << "\nRingkasan Parameter Kimia" << endl; 
        cout << "===========================" << endl;
	if (pH >= 6.5 && pH <= 8.5){
			cout << "pH: Aman";
		} else {
			cout << "pH: Tidak Aman";
		}
	cout << endl;
	if (kadarNitrat < 20){
		cout << "Kadar Nitrat: Aman";
	} else {
		cout << "Kadar Nitrat: Tidak Aman";
	}
	cout << endl;
	if (kadarNitrit < 3){
		cout << "Kadar Nitrit: Aman";
	} else {
		cout << "Kadar Nitrit: Tidak Aman";
	}
	cout << endl;
	if(pH >= 6.5 && pH <= 8.5 && kadarNitrat < 20 && kadarNitrit < 3){
	cout << "==== Parameter Kimia Terdeteksi Aman ====\n";
	} else {
	cout << "==== Parameter Kimia Terdeteksi Tidak Aman ====\n" << endl;
	cout << "Langkah Pencegahan:" << endl;
	cout << "1. Penetralan tingkat pH dengan penambahan bahan yang mengandung asam atau basa."<< endl;
	cout << "2. Lakukan filtrasi dan destilasi.\n";
	}
	cout << endl;
	cout << "Ringkasan Parameter Biologi" << endl; 
    cout << "===========================" << endl;
	if (kadarBakteri == 0){
		cout << "Kadar Bakteri: Aman";
	} else {
		cout << "Kadar Bakteri: Tidak Aman";
	}
	cout << endl;
	if(kadarBakteri == 0){
	cout << "==== Parameter Biologi Terdeteksi Aman ====\n";
	} else {
	cout << "==== Parameter Biologi Terdeteksi Tidak Aman ====\n";
	cout << "\nLangkah Pencegahan:" << endl;
	cout << "1. Rebus air hingga mendidih." << endl;
	cout << "2. Jika perlu, lakukan proses disinfeksi kimia.\n";
	}
	cout << endl;
	cout << "Ringkasan Kandungan Zat Pencemar" << endl; 
    cout << "==================================" << endl;
	if (Arsenic <= 0.01){
		cout << "Kadar logam (Arsenic): Aman";
	} else {
		cout << "Kadar logam (Arsenic): Tidak Aman";
	}
	cout << endl;
	if (Timbal <= 0.1){
		cout << "Kadar logam (Timbal): Aman";
	} else {
		cout << "Kadar logam (Timbal): Tidak Aman";
	}
	cout << endl;
		if (Kromium <= 0.05){
		cout << "Kadar logam (Kromium): Aman";
	} else {
		cout << "Kadar logam (Kromium): Tidak Aman";
	}
	cout << endl;
	if (Merkuri < 0.001){
		cout << "Kadar logam (Merkuri): Aman";
	} else {
		cout << "Kadar logam (Merkuri): Tidak Aman";
	}
	cout << endl;
	if(Arsenic <= 0.01 && Timbal <= 0.1 && Kromium <= 0.05 && Merkuri < 0.001){
	cout << "==== Kandungan Zat Pencemar masih dalam ambang batas ====\n";
	} else {
	cout << "==== Kandungan Zat Pencemar Melebihi batas maksimum dan tidak layak dikonsumsi! ====\n";
	cout << "\nLangkah Pencegahan:" << endl;
	cout << "# SUMBER AIR" << endl;
	cout << "1. Pengelolaan limbah industri sebelum dibuang." << endl;
	cout << "2. Perlindungan sumber air dari sampah dan zat pencemar lainnya." << endl;
	cout << "# RUMAH TANGGA" << endl;
	cout << "1. Pemasangan sistem filtrasi air." << endl;
	cout << "2. Pemeliharaan sistem perpipaan." << endl;
	}
	cout << endl;
}    
int main (){
	double SuhuUdara, Warna, Keruh, KandunganTerlarut, pH, kadarNitrat, kadarNitrit, kadarBakteri, Arsenic, Timbal, Kromium, Merkuri;
	string Rasa, Bau;
	cout << "========================================================================================" << endl;
	cout << "SELAMAT DATANG DI SISTEM PENDETEKSI KOMPONEN DALAM SUMBER AIR DAN UJI KELAYAKAN KONSUMSI" << endl;
	cout << "======================================================================================== \n" << endl;
	cout << "\n\t\t------- Sistem Pendeteksi Kandungan pada Air Minum -------" << endl; 
	cout << "\nParameter Fisik" << endl; 
	cout << "================" << endl;
    cout << "Suhu Udara (dalam Celcius)\t\t\t\t: ";
    cin >> SuhuUdara;
    cout << "Kondisi Warna (dalam True Color Unit)\t\t\t: ";
    cin >> Warna;
    cout << "Tingkat Kekeruhan (dalam Nephelometric Turbidity Unit)\t: ";
    cin >> Keruh;
    cout << "Rasa (Berasa atau Tidak)\t\t\t\t: ";
    cin >> Rasa;
    cout << "Bau (Bau atau Tidak)\t\t\t\t\t: ";
    cin >> Bau;
    cout << "Kandungan Bahan Padat Terlarut (dalam mg/L)\t\t: ";
    cin >> KandunganTerlarut;
    cout << "\nParameter Kimia" << endl; 
    cout << "================" << endl;
    cout << "pH (0-14)\t\t\t: ";
    cin >> pH ;
    cout << "Kadar Nitrat (dalam mg/L)\t: ";
    cin >> kadarNitrat;
    cout << "Kadar Nitrit (dalam mg/L)\t: ";
    cin >> kadarNitrit;
    cout << "\nParameter Biologi" << endl; 
    cout << "================" << endl;
    cout << "Kadar Bakteri Esherichia Coli (dalam CFU/100 ml): ";
    cin >> kadarBakteri;
    cout << "\n\t\t------- Sistem Pendeteksi Zat Pencemaran -------" << endl;
    cout << "Kadar Arsenic (As)\t: ";
    cin >> Arsenic;
    cout << "Kadar Timbal (Pb)\t: ";
    cin >> Timbal;
    cout << "Kadar Kromium (Cr)\t: ";
    cin >> Kromium;
    cout << "Kadar Merkuri (Hg)\t: ";
    cin >> Merkuri;
    cout << "\n\t\t =========== RINGKASAN SISTEM DAN LANGKAH PENCEGAHAN =============" << endl;
    PengecekanParameter(SuhuUdara, Warna, Keruh, Rasa, Bau, KandunganTerlarut, pH, kadarNitrat, kadarNitrit, kadarBakteri, Arsenic, Timbal, Kromium, Merkuri);
    cout << "\n===========================" << endl;
    cout << "PROSES PENDETEKSIAN SELESAI" << endl;
    cout << "===========================" << endl;
    return 0;
}