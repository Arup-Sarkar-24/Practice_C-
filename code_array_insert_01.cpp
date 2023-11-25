//W.A.P to insert array element in  any position
#include<iostream>
using namespace std;
int main()
{
int i,n,val,pos;
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
cout<<"\nEnter the value to insert the array : ";
cin>>val;
cout<<"Enter the position of the new value to insert the array : ";
cin>>pos;
for(i=n;i>pos;i--){
	a[i+1]=a[i];
}
a[pos]=val;
cout<<"\nAfter inserting value the array elenets  : ";
for(i=0;i<n;i++){
	cout<<a[i]<<ends;
}
return 0;
}
