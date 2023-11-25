//W.A.P to Print array elements in reverse order
#include<iostream>
using namespace std;
int main()
{
int i,n;
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
cout<<"\nThe array elenets are arranged in reverse order : ";
for(i=n-1;i>=0;i--){
	cout<<a[i]<<ends;
}
return 0;
}
