#include <iostream>
using namespace std;

int main(){
	int max=0;
	int jml,i;
	cout<<"Jumlah Angka : ";
	cin>>jml;
	for(int i=0;i<jml;i++){
		cout<<"\nAngka "<<i+1<<" : ";
		cin>>angka[i];
		if(angka[i]>max){
			max=angka[i];
		}
	}
	cout<<"Nilai Max : "<<max;
}
