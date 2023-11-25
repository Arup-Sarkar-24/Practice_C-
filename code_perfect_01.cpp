//W.A.P to cheek Perfect number
#include<iostream>
using namespace std;
int main(){
int a,b,c=0;
cout<<"Enter a number : ";
cin>>a;
for(int i=1;i<=a-1;i++)
{
	b=a%i;
	//cout<<b<<endl;
	if(b==0)
		{
			c=c+i;
			//cout<<c<<endl;
		}
}
if(c==a)
{
	cout<<"Perfect number.";
}
else
{
	cout<<"Not Perfect number."	;
}
return 0;
}
