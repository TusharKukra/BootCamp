count number of 1s in binary representation of an integer

Input Format
Input N = Number of Test Cases, followed by N numbers

Constraints
Output Format
Number of Set Bits in each number each in a new line

Sample Input
3
5
4
15
Sample Output
2
1
4
Explanation
Convert Binary to Decimal first and then count number of 1's present in all digits.

// Code :

#include <bits/stdc++.h>
using namespace std;
 
// recursive function to count set bits
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
 
    else
 
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
 
int main()
{
    int t, n;
	
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>n;
    cout << countSetBits(n)<<endl;
	}
    return 0;
}
