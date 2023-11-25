#include<iostream>
#include<string>
//#define num 10
#define greater(a,b) ((a>b)?a:b)
using namespace std;
int main (){
//int i,r;
//for(i=1;i<=10;i++)
//{
//	r=num*i;
//    cout<<num<<" * "<<i<<" = "<<r<<endl;
//}
int x,y;
cout<<"Enter two numbers : "<<endl;
cin>>x>>y;
cout<<"The greater number is = "<<greater(x,y);
return 0;
}
