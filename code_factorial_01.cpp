//W.A.P to find out Factorial Number
#include<iostream>
using namespace std;
int main()
{
 int a,b=1;
 cout<<"Enter a number : ";
 cin>>a;
 if(a<0)
   {
	 cout<<"Invalid Number .";
   }   
else if(a==0)
   {
     cout<<"Factorial of the Entered number is 1.";
   }   
else if(a==1)
   {
	 cout<<"Factorial of the Entered number is 1.";
   }  
else
  {
	for(int i=1;i<=a;i++)
	  {
	    b=b*i;
      }
    cout<<"Factorial of the Entered number is "<<b<<" .";
  }

return 0;
}
