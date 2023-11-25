#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int f(int n){
	if(n<=1) return n;
	int dp[n+1];
	memset(dp,-1,sizeof dp);
	if(dp[n]!=-1) return dp[n];
	return dp[n]=f(n-1)+f(n-2);
}
int main(){
	int n;
	cout<<"Enter a no : ";
	cin>>n;
	cout<<f(n);
	return 0;
}
