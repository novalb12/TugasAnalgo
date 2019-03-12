/*
Nama	: Muhammad Naufal Bimantara
Kelas	: B
NPM 	: 140810170058
Nama Program : Binary Search
*/

#include <iostream>
using namespace std;

int main(){
	int y,mid,jml;
	bool found=false;
	cout<<"Jumlah Angka : ";
	cin>>jml;
	int angka[jml];
	for(int i=0;i<jml;i++){
		cout<<"\nAngka "<<i+1<<" : ";
		cin>>angka[i];
	}
	cout<<"Angka yang dicari : ";
	cin>>y;
	int k=1;
	int l=jml;
	int j=0;
	while((j<jml)&&(found==false)){
		mid=(k+l)/2;
		if(angka[mid]==y){
			found=true;
		}
		else if(angka[mid]<y){
			k=mid+1;
		}
		else{
			l=mid-1;
		}
	}
	
	cout<<"Hasil Ada indeks ke -"<<mid;
}
