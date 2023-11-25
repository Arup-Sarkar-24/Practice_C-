//W.A.P to Cheek Prime number
#include<iostream>
using namespace std;
int main(){
int a,b=0;
cout<<"Enter a number : ";
cin>>a;
if(a<2){
	cout<<"Not Prime number. ";
}
else if(a==2){
	cout<<"Entered number is prime number . ";
}
else{

for(int i=2;i<=(a/2)+1;i++){
	if(a%i==0){
		b=b+1;
	}
}
if(b==0){
	cout<<"Entered number is prime number . ";
}
else{
	cout<<"Not Prime number. ";
}
}
return 0;
}
