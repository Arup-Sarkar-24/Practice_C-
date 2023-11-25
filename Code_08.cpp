#include<iostream>
#include<string>
using namespace std;
int loop1(int n){
	for (int i=1;i<=n;i++)
	cout<<i;
	return 0;
}
int main (){
	//int a,b;
	//a=5;
	//b=++a;
	//b=a++;
	
//cout<<"I am the boss";
//cout<<b;
//int c=1;
//while (c<=10)
//{
//	if(c%2==1){
//		cout<<c<<ends;
//	}
//	c++;
//}
//loop1(5);
//int age;
//cout<<"Enter your age : ";
//cin>>age;
//if (age>=18)
//goto vote;//Level 
//else
//goto notvote;
//vote:
//	cout<<"You are eligible for vote ";
//notvote:
//	cout<<"You are not eligible for vote";
int marks[7];
int total=0;
cout<<"Enter mrks"<<endl;
for(int i=0;i<=6;i++){
		cin>>marks[i];
		if(marks[i]>100){
			cout<<"Invalid Input, Please Enter Right Marks"<<endl;
			i--;
		}
	}
	cout<<"The marks are "<<ends;
	for(int i=0;i<=6;i++)
	{
		total=total+marks[i];
		cout<<marks[i]<<ends;
	}
	cout<<endl;
	cout<<"Total marks is : "<<total<<endl;
return 0;
}
