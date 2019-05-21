#include<iostream>
#include<time.h>
using namespace std;

void merge_sort(int [],int ,int );
void merge(int [],int,int ,int );

int main()
{
	clock_t t1,t2;
    
    int n;
    cout<<"Jumlah isi array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Isi Elemen"<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<"Elemen ke-"<<i+1<<endl;
        cin>>a[i];
    }
    int p=0,r=n;
    t1=clock();
    merge_sort(a,p,r);
    
   cout<<"Hasil Sorting"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"a["<<i<<"]="<<a[i]<<endl;
   }
   t2=clock();
    float diff ((float)t2-(float)t1);
    float second=diff/CLOCKS_PER_SEC;
    cout<<"Runtime = "<<second;
    system ("pause");
     return 0;
}

void merge_sort(int a[],int p,int r)
    {
        int q;
        if(p<r)
        {
         q=(p+r)/2;
         merge_sort(a,p,q);
         merge_sort(a,q+1,r);
         merge(a,p,q,r);
        }
    }

 void merge(int a[],int p,int q,int r)
    {
        int n1=q-p+1;
        int n2=r-q;
        int L[n1+1];
        int R[n2+1];
        for(int i=1;i<=n1;i++)
        {
            L[i]=a[p+i-1];
        }
        for(int j=1;j<=n2;j++)
        {
            R[j]=a[q+j];
        }
        L[n1+1]=999;
        R[n2+1]=999;
        int i=1, j=1;
        for(int k=p;k<=r;k++)
        {
            if(L[i]<=R[j])
            {
                a[k]=L[i];
                i=i+1;
            }
            else
            {
                a[k]=R[j];
                j=j+1;
            }
        }
    }
