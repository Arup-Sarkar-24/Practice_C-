//W.A.P to armstrong number 
#include<iostream>
using namespace std;
int main(){
int a,b,c,k;
cout<<"Enter a number : ";
cin>>a;
k=a;
c=0;
while(a!=0)
{
	b=a%10;
	c=c+b*b*b;
	a=a/10;
}
if(c==k){
cout<<"armstrong Number. ";
}
else{
cout<<"Not Armstrong.";
}
return 0;
}
