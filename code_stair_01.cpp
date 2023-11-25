#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<cstdlib>
using namespace std;
int f(int ind, vector<int> &heights , vector<int> &dp ){
	if(ind==0) return 0;
	if(dp[ind]!=-1) return dp[ind];
	int left = f(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);
	int right=INT_MAX;
	if(ind>1) right=f(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);;
	return dp[ind] = min(left,right);
}
int frogjump(int n, int heights){
	int dp[n+1];
	memset(dp,-1,sizeof dp);
	return f(n-1,heights);
}
int main(){
	int n; 
	cout<<"Enter a no : ";
	cin>>n;
	cout<<frogjump(n);
	return 0;
}
