//W.A.P to Calculate Sum of Digits 
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
	c=c+b;
	a=a/10;
}
cout<<"Sum of Digits of Entered number is : "<<c;
return 0;
}
