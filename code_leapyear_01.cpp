//W.A.P to Check Leap Year or not
#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter a Year : ";
cin>>a;
if(a%400==0)
{
	cout<<"The Entered Year "<<a<<" is a Leap Year.";
}
else if(a%100==0)
{
	cout<<"The Entered Year "<<a<<" is not a Leap Year.";
}
else if(a%4==0)
{
	cout<<"The Entered Year "<<a<<" is a Leap Year.";
}
else
{
	cout<<"The Entered Year "<<a<<" is not a Leap Year.";
}
return 0;
}
