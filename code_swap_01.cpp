//W.A.P to Swap two numbers
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter two numbers : "<<endl;
cin>>a>>b;
//with variables
//c=a;
//a=b;
//b=c;
//cout<<"After swaping the numbers are : "<<a<<" and "<<b;
//without variables
a=a+b;
b=a-b;
a=a-b;
cout<<"After swaping the numbers are : "<<a<<" and "<<b;
return 0;
}
