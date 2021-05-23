// Statement :
Iron rod of N inches, the cost of different sizes of iron rod is different, and is stored in an integer array.
Your task is to help to portion rod in the best possible way such that he gets maximum money out of it.
	
Input1 : an integer value N representing the length of the rod in inches.
Input2 : an integer array consisting of the cost of different lengths of iron (upto N inches) 
	 nd has the starting index as 1 (i.e cost of 2 inches of iron rod = input2[2] )

Output : Return the maximum profit he/she can make by selling his iron rod.
	
	
Example :
	I/P 1 : 5
	I/P 2 : {0,2,1,7,3,5}
	
	O/P : 11
		
	Explaination : In this case, the max profit that can obtain by selling his rod is by dividing it into
		       rods of length 1,1,3 so that it sums upto 2+2+7 = 11 . Hence, MaxProfit = 11.

// Code :

#include<bits/stdc++.h>
using namespace std;

// Iron Rod Problem 

int maxProfit(int n, int a[]){

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

	cout<<maxProfit(n,a)<<endl;

	return 0;

	
}
