//W.A.P to Palindrome Number 
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
	c=c*10+b;
	a=a/10;
}
if(c==k){
cout<<"palindrome . ";
}
else{
cout<<"Not Palindrome.";
}
return 0;
}
