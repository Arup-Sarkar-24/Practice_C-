#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		string name;
		int salary;
	Employee(string name1,int salary1,int sp){
		this->name=name1;
		this->salary=salary1;
		this->secretpassword=sp;
	}
	
	void printdetails(){
		cout<<"The name of our employee is "<<this->name<<" and  his salary is "<<this->salary<<" Rupees"<<endl;	
	}
	void getsp(){
		cout<<"The secret password of the employee is : "<<this->secretpassword;
	}
	private:
	int secretpassword;	
		
};
int main(){


//blg.name="Arup";
//string n1;
//int s1;
//cout<<"Enter Employee name : ";
//cin>>n1;
////blg.salary=25000;
//cout<<"Enter Employee salary : ";
//cin>>s1;
Employee blg("Arup Sarkar",25000,545366);
blg.printdetails();
blg.getsp();
return 0;
}
