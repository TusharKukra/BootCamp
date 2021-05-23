// Code :

#include<bits/stdc++.h>
using namespace std;

// Iron Rod Problem 

int maxProfit(int a[], int n){

	int cost[n];

	for(int i=0;i<n;i++){
		cost[i] = a[i+1];  // store elements of array (from 2nd element, bcoz 1st element is 0) into new array 
	}

	int dp[n +1];
	dp[0] = 0; // 1st element is zero

	for(int i=1 ;i<=n ;i++){
		int maxVal = INT_MIN;

		for(int j=0 ; j<i ;j++){
			maxVal = max(maxVal, cost[j] + dp[i-j-1]);
		}

		dp[i] = maxVal;
	}

	return dp[n];

}


int main(){

	int a[1001];
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		cin>>a[i];
	}

	cout<<maxProfit(a,n)<<endl;

	return 0;

	
}
