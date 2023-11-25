//W.A.P to Reverse a Number 
#include<iostream>
using namespace std;
int main(){
int a,b,c,k;
cout<<"Enter a number : ";
cin>>a;
c=0;
while(a!=0)
{
	b=a%10;
	c=c*10+b;
	a=a/10;
}
cout<<"Reverse no : "<<c;
return 0;
}
