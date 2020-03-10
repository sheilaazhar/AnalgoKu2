/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Nama Program: Mencari nilai maksimum
*/

#include <iostream>

using namespace std;

main(){
	int n, maks, i, x[99];

	cout<<"------------------------------------------"<<endl;
	cout<<"- - - Menghitung Nilai Maksimum - - -"<<endl;
	cout<<"------------------------------------------"<<endl;	
	
	for(;;){
		cout<<"Masukkan jumlah data: ";
		cin>>n;
		if(n<2){
			cout<<"Masukan minimal 2 data!"<<endl;
			continue;
		}
		break;
	}
	
	cout<<"Masukkan data:"<<endl;
	for (i=0; i<n; i++){
		cout<<"ke-"<<i+1<<": ";
		cin>>x[i];
	}
	
	i=1;
	maks=x[0];
	do {
		if(x[i]>maks){
			maks=x[i];
		}
		i=i+1;
	}
	while(i<n); 
	cout<<" "<<endl;
	cout<<"Nilai terbesar dari data input adalah: "<<maks<<endl;
}

