#include<iostream>
using namespace std;
//int add(int a, int b){
//	int c;
//	c=a+b;
//	return c;
//}
int main() {
	
/*int a=5;   
for(int i=0;i<=25;i++){
	cout<<"The value of I integer is = "<<i<<endl;
}
cout<<a;*/
//int x,y;
//cout<<"Enter first no = ";
//cin>>x;
//cout<<"Enter second no = ";
//cin>>y;
//cout<<"The function return = "<<add(x,y);
//int arr[3]={1,3,6};
//cout<<arr[0];
int const totalstudents=10;
int const totalmarks=100;
int marks[totalstudents-1];
for (int i=1;i<totalstudents+1;i++){
	cout<<"Enter the student Roll no: "<<i<<" marks = ";
	cin>>marks[i];
	if(marks[i]>totalmarks){
	i--;
	cout<<"Invalid marks, Enter again"<<endl;}
}
for (int i=1;i<totalstudents+1;i++){
	cout<<"Roll of the student is "<<i<<"Math marks is "<<marks[i]<<endl;
}
return 0;
}
