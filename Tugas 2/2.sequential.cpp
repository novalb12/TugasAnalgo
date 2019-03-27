#include <iostream>
using namespace std;

int main(){
	int i=0,y,idx=0,jml;
	bool found=false;
	cout<<"Jumlah Angka : ";
	cin>>jml;
	int angka[jml];
	for(i;i<jml;i++){
		cout<<"\nAngka "<<i+1<<" : ";
		cin>>angka[i];
	}
	cout<<"Angka yang dicari : ";
	cin>>y;
	while((i<jml)&&(found==false)){
		if(angka[i]==y){
			found=true;
			idx=i;
		}
		else i=i+1;
	}
	cout<<"Hasil Ada indeks ke -"<<idx;
}
