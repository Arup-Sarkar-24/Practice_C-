#include<iostream>
#include<string>
using namespace std;
int main (){
string a;
cout<<"Enter a String : ";
cin>>a;
int n=a.length();
//cout<<"Enter a String : ";
//cin>>a;
for(int i=n-1;i>=0;i--)
{
	cout<<a[i];
}
return 0;
}
