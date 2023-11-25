//W.A.P to Sort array elements in ascending and descending order
#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"How many elements you want to input = ";
cin>>n;
int a[n];
cout<<"Enter "<<n<<" number of elements of the array : "<<endl;
for(i=0;i<=n-1;i++){cin>>a[i];
}
cout<<"Your entered array is : ";
for( i=0;i<=n-1;i++){
	cout<<a[i]<<ends;
}
for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(a[i]>a[j]){
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
		
	}
} 
cout<<"\nThe array elenets are arranged in ascending order : ";
for(i=0;i<n;i++){
	cout<<a[i]<<ends;
}
cout<<"\nThe array elenets are arranged in descending order : ";
for(i=n-1;i>=0;i--){
	cout<<a[i]<<ends;
}
return 0;
}
