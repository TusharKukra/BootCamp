Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Note:

1. You could assume no leading zero bit in the integer’s binary representation.
Input Format
Input positive integer n

Constraints
The given integer is guaranteed to fit within the range of a 32-bit signed integer.

Output Format
Print the integer after flipping bits of n.

Sample Input
5
Sample Output
2
Explanation
The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
  
// Code:

#include<bits/stdc++.h>
using namespace std;
  
unsigned int onesComp(unsigned int n)
{
   // Find number of bits in the given integer
   int number_of_bits = floor(log2(n))+1;
  
   // XOR the given integer with poe(2, 
   // number_of_bits-1 and print the result 
   return ((1 << number_of_bits) - 1) ^ n;
}
  
int main()
{
  unsigned int n ;
  cin>>n;
  cout << onesComp(n);
  return 0;
} 
