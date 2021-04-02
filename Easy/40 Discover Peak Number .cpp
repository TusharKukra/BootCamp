A peak element is an element that is greater than its neighbors.

Given an input array arr, where arr[i] ≠ arr[i+1], find a peak element if exists return true else return false.
You may imagine that arr[ -1 ] = arr[ n ] = -∞.

Input Format
A single integer, N, denoting the number of elements in array. Next line contains N integers, denoting the elements of array.

Constraints
n<1000000

Output Format
if peak element is present print true else print false

Sample Input
13
1 2 1 3 5 6 4 8 5 7 9 11 10
Sample Output
true


// Code :

#include<iostream>
using namespace std;
bool findPeak(int arr[], int n)
{
    if (n == 1)
      return true;
    if (arr[0] > arr[1]) // earlier it was >=
        return true; // earlier it was false 
    if (arr[n - 1] > arr[n - 2])// earlier it was >=
        return true;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])// earlier it was >=
            return true;
    }
	return false;
}
int main(){

	int n;
	cin>>n;
    int arr[n] ; 
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(findPeak(arr,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
