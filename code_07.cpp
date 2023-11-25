#include<iostream>
using namespace std;
int main (){
int a,b,c,max1,max2;
cout<<"Enter the value of first number = ";
cin>>a;
cout<<"Enter the value of second  number = ";
cin>>b;
cout<<"Enter the value of third number = ";
cin>>c;
max1=(a>b)? a:b;//ternary operator
max2=(max1>c)? max1:c;
cout<<"The greatest number is = "<<max2;
return 0;
}
