#include <iostream>
//#include <string>
#include <fstream>
using namespace std;
int main (){
string str1;
ifstream newFile("C:\\Users\\Jarvis\\Desktop\\CPP.txt");
cout<<"File Created...";
//newFile<<"I am learning CPP";
while(getline(newFile,str1))
{
	cout<<str1<<endl;
}
newFile.close();
return 0;
}
