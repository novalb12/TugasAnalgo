#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int arr[100],n,temp;
    cout << "Bubble Sort";
    cout << "\n================================================"<<endl;
    cout<<"Jumlah Elemen : ";cin>>n;
    cout << "\n------------------------------------------------" << endl;
    
    for(int i=0;i<n;++i){
        cout<<"Elemen ke-"<<i+1<<" : ";cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "------------------------------------------------" << endl;
    cout<<"\nHasil dari Bubble Sort : "<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout << "\n================================================"<<endl;
}

