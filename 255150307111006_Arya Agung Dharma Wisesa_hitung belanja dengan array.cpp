#include <iostream>
using namespace std;

int main ()
{
	int* HargaBarang;
	int JumlahBarang;
	float NominalDiskon;
	int Total=0;
	
	cout<<"Masukan Jumlah Barang Yang Dibeli : ";
	cin>>JumlahBarang;

	HargaBarang = new int[JumlahBarang];
	
	for(int i=0 ; i<JumlahBarang ; i++) {
		cout<<"Barang Ke-"<<i+1<<" : ";
		cin>>HargaBarang[i];
		Total += HargaBarang[i];
	}
	
	cout<<"Masukan Nominal Diskon : ";
	cin>>NominalDiskon;
	
	float Diskon = (NominalDiskon / 100) * Total;
	float TotalHarga = Total - Diskon;
	
	cout<<"Total Harga Sebelum Diskon : "<<Total<<endl;
	cout<<"Diskon Yang Di dapat : Rp."<<Diskon<<endl;
	cout<<"Total Harga Setelah Diskon : "<<TotalHarga<<endl;
	
	delete[] HargaBarang;
	
	return 0;
}
