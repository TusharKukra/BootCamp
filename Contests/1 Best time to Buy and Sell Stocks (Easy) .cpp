Given the prices of a stock for n days you need to maximize your profit by choosing a single day to buy and different day to sell the stocks.

Input Format
The first line takes a number N representing the size of the array. The second line has N integers representing the elements of an array.

Constraints
The length of the array should be less than 10^4.
The price of each stock should be less than 10^4.

Output Format
The profit earned in buying and selling the stock.

Sample Input
6
7 1 5 3 6 4
Sample Output
5
Explanation
Input: { 7, 1, 5, 3, 6, 4 }
Output: The maximum profit is 5.
This is achieved by buying the stock of day 2 with price = 1 and selling it on day 5 with price = 6.
Profit = 6 - 1 = 5.

  

// Code :
  
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int N){
	int n = N;
	int cost = 0;
	int maxCost = 0;
	if(n==0){
		return 0;
	}

	int minimumPrice = price[0];
	for(int i=0;i<n;i++){
		minimumPrice = min(minimumPrice,price[i]);
		cost = price[i]-minimumPrice;
		maxCost = max(maxCost,cost);
	}
	return maxCost;
}

int main () {
	int N;
	int price[10001];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>price[i];
	}
	cout<<maxProfit(price,N);
	return 0;
}
