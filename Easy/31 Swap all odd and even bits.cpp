Given an unsigned integer, swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43 (00101011). Every even position bit is swapped with adjacent bit on right side , and every odd position bit is swapped with adjacent on left side.

Input Format
First line contains T - no of testcases. Next T lines contain one integer each containing the input N.

Constraints
Expected time complexity for each testcase - O(1)
Expected space complexity for each testcase - O(1)

Output Format
Print output for each testcases in a new line.

Sample Input
2
5
9
Sample Output
10
6


// Code:
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to swap even  
// and odd bits  
unsigned int swapBits(unsigned int x)  
{  
    // Get all even bits of x  
    unsigned int even_bits = x & 0xAAAAAAAA;  
  
    // Get all odd bits of x  
    unsigned int odd_bits = x & 0x55555555;  
  
    even_bits >>= 1; // Right shift even bits  
    odd_bits <<= 1; // Left shift odd bits  
  
    return (even_bits | odd_bits); // Combine even and odd bits  
}  
  
int main()  
{  	
	int n;
    unsigned int x ; 
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>x;
	
	cout<<swapBits(x)<<endl;  
	}
  
    return 0;  
} 
