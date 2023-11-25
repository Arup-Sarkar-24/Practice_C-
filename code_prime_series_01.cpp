//W.A.P to find prime Numbers between two range
#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter The range starting number & Ending Number : "<<endl;
 cin>>a>>b;
 c=a;
 if(a<2){a=2;}
 if(b<a)
 {cout<<"Invalid range....";}
 else{
 cout<<"Prime Numbers in the given range from "<<c<<" to "<<b<<" are : "<<ends;
 for(int i=a;i<=b;i++)
 	{
 		if(i==2)
 		{cout<<2<<ends;
		 }
 		else
 		{
		
 		int c=0;
 		for(int j=2;j<=(i/2)+1;j++) 
 			{
 				
 				if(i%j==0)
 					{ 
 					 c=c+1;
					}
			}
		if(c==0)
			{
				cout<<i<<ends;
			}
		}
	 }
}
return 0;
 }
