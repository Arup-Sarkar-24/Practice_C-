//W.A.P to Calculate area of Circle, Square,Rectangle and triangle
#include<iostream>
using namespace std;
int circle()
{	int r;
	float p=3.1416;
	cout<<"Enter the radius of circle : ";
	cin>>r;
	cout<<"Area of the Circle is : "<<p*r*r;	
}
int square ()
{	int r1;
	cout<<"Enter the side of Square : ";
	cin>>r1;
	cout<<"Area of the Square is : "<<r1*r1;	
}
int rectangle ()
{
	int a,b;
	cout<<"Enter the lenght and width of Rectangle : "<<endl;
	cin>>a>>b;
	cout<<"Area of the Rectangle is : "<<a*b;
}
int triangle ()
{
	float a1,b1;
	cout<<"Enter the base and height of Triangle : "<<endl;
	cin>>a1>>b1;
	cout<<"Area of the Triangle is : "<<a1*b1/2;	
}
int main()
{
int ch;
cout<<"For 1 to Calculate area of Circle."<<endl;
cout<<"For 2 to Calculate area of Square."<<endl;
cout<<"For 3 to Calculate area of Rectangle."<<endl;
cout<<"For 4 to Calculate area of Triangle."<<endl;
cout<<"Enter you Choice : ";
cin>>ch;
switch(ch)
{
case 1: circle();
		break;
case 2: square ();
		break;
case 3: rectangle();
		break;
case 4: triangle();  
		break;
		
default:
	 {cout<<"Invalid Input...";}
}
return 0;
}
