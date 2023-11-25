//W.A.P to print Fibonacci Number & Series
#include<iostream>
using namespace std;
int main()
{
 int a=0,b=1,c,d;
 cout<<"Enter The range = ";
 cin>>c;
 cout<<a<<ends<<b<<ends;
 for(int i=1;i<=c-2;i++)
 	{
 		d=a+b;
 		a=b;
 		b=d;
 		cout<<d<<ends;
	 }

return 0;
 }
