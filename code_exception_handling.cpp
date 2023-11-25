#include<iostream>
using namespace std;
int main (){
cout<<"Executing Straring..."<<endl;
int a,b,c;
cout<<"Enter two numbers : "<<endl;
cin>>a>>b; 
try
{
if (b==0)
throw b;
c=a/b;
cout<<"Result: "<<c<<endl;
}
catch(int x)
{
cout<<"Can't devide by "<<x<<endl;
}
cout<<"Execution Ended...";
return 0;
}
