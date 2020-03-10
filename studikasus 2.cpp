/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Nama Program: Sequential Search
*/

#include<iostream>
using namespace std;

void PencarianBeruntun(int x[], int tanya, int n){
	bool ketemu=false;
	int i=0;
	while(i<n && !ketemu){
		if(x[i] == tanya){
			ketemu=true;
		}else{
			i++;
		}
	}
	
	int lokasi;
	if(ketemu){
		lokasi = i+1;
	} else{
		lokasi = 0;
	}
	cout<<"Elemen yang dicari berada di indeks: "<< lokasi;
}

main(){
	int n, tanya;
	cout<<"Masukkan banyak elemen array: ";
	cin>>n;
	
	int x[n];
	cout<<"Masukan elemen array berupa angka:"<<endl;
	for(int i=0; i<n; i++){
		cout<<"elemen["<<i+1<<"] = ";
		cin>>x[i];
	}
	
	cout<<endl<<"Masukan elemen array yang ingin dicari: ";
	cin>>tanya;
	
	PencarianBeruntun(x, tanya, n);
}

