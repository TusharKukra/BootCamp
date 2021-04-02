Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Input Format
First line contains integer N (size of the array) followed by N more integers.

Constraints
Output Format
Majority Element of array

Sample Input
3
1 1 2
Sample Output
1
Explanation
Number of 1's in the array is more than 3/2 , Hence majority element is 1

  
// Code :
  
#include <iostream>
using namespace std;
int CandidateFreq(int *a, int n, int candidate) {
	int cnt = 0;
	for (int i = 0 ; i < n ; i++) {
		if (a[i] == candidate) {
			cnt++;
		}
	}

	return cnt;
}

int majority(int *a, int n) {
	int cnt = 0;
	int candidate;

	for (int i = 0 ; i < n ; i++) {
		if (cnt == 0) {
			candidate = a[i];
		}

		cnt += (candidate == a[i]) ? 1 : -1;
	

	int f = CandidateFreq(a, n, candidate);
	if (f > n / 2) {
		return candidate;
	}

	return -1;
}

int main() {
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout << majority(a, n) << endl;

	return 0;
}
