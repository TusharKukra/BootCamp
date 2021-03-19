Given an integer, determine if it is a power of four or not. An integer n is a power of four, if there exists an integer x such that n == 4x.

Input Format
First line of input will contain an integer x.

Constraints
Output Format
Print "True" (without quotes) if x is a power of four. Print " False"(without quotes) if x is not power of four.

Sample Input
64
Sample Output
True
Explanation
4^3=64
Therefore, 64 is power of 4
  
  
// Code:
  
#include <iostream>
#include <math.h>
using namespace std;
 
// Returns true if `n` is a power of four
bool checkPowerOf4(unsigned n)
{
    // find `log4(n)`
    double i = log(n) / log(4);
 
    // return true if `log4(n)` is an integer
    return i == trunc(i);
}
 
int main()
{
    unsigned n ;
	cin>>n;
 
    if (checkPowerOf4(n)) {
        cout << "True";
    }
    else {
        cout <<"False";
    }
 
    return 0;
}
