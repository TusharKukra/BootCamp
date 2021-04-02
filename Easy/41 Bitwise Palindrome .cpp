Check if the binary representation of a number is palindrome or not.

Input Format
First line contains T - no of testcases. Next T lines contain one integer each containing the input N.

Constraints
1 <= T <= 10000
1 <= N <= 1018
Expected Time Complexity: O(log N)
Expected Space Complexity: O(logN)

Output Format
Print "true" or "false" (without quotes) for each testcase in a new line.

Sample Input
2
17
16
Sample Output
true
false
Explanation
(17)10 = (10001)2 Which is pallindrome hence output is true.
(16)10 = (10000)2 Which is pallindrome hence output is false.
  
  
// Code :
  
#include <iostream>
using namespace std;
 
bool isPalindrome(unsigned n)
{
    
    unsigned rev = 0;
 
    
    unsigned k = n;
    while (k)
    {
        
        rev = (rev << 1) | (k & 1);
        k = k >> 1;    
    }
 
    
    return n == rev;
}
 
int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		int n;
		cin>>n;
	
         
 
    if (isPalindrome(n)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
	}
 
 
    return 0;
}
