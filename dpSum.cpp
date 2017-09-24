#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int dpSum(vector<int> dp, int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(dp[n] != -1){
		return dp[n];
	}
	else{	
		return dp[n] = dp[n-3] + dp[n-1] + dp[n-5];
	}
}

int main() {
	int n;
	cin>>n;
	vector<int> dp(n);
	cout << dpSum(dp, n) << endl;
	return 0;
}