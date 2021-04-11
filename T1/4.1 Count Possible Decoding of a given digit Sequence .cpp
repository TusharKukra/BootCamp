/*

Let 1 represent ‘A’, 2 represents ‘B’, etc. Given a digit sequence, 
count the number of possible decodings of the given digit sequence. 

Examples: 

Input:  digits[] = "121"
Output: 3
// The possible decodings are "ABA", "AU", "LA"

Input: digits[] = "1234"
Output: 3
// The possible decodings are "ABCD", "LCD", "AWD"
An empty digit sequence is considered to have one decoding. 
It may be assumed that the input contains valid digits from 0 to 9 and there are no leading 0’s, 
no extra trailing 0’s, and no two or more consecutive 0’s.

This problem is recursive and can be broken into sub-problems. 
We start from the end of the given digit sequence. 
We initialize the total count of decodings as 0. We recur for two subproblems. 
1) If the last digit is non-zero, recur for the remaining (n-1) digits and add the result to the total count. 
2) If the last two digits form a valid character (or smaller than 27), recur for remaining (n-2) digits and 
   add the result to the total count.

*/


// Code :

#include <cstring>
#include <iostream>
using namespace std;
 
// recuring function to find
// ways in how many ways a
// string can be decoded of length
// greater than 0 and starting with
// digit 1 and greater.
int countDecoding(char* digits, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
    if (digits[0] == '0')
        return 0;
 
    // for base condition "01123" should return 0
    // Initialize count
    int count = 0;
 
    // If the last digit is not 0,
    // then last digit must add
    // to the number of words
    if (digits[n - 1] > '0')
        count = countDecoding(digits, n - 1);
 
    // If the last two digits form a number smaller
    // than or equal to 26, then consider
    // last two digits and recur
    if (digits[n - 2] == '1'
        || (digits[n - 2] == '2'
        && digits[n - 1] < '7'))
        count += countDecoding(digits, n - 2);
 
    return count;
}
 
// Given a digit sequence of length n,
// returns count of possible decodings by
// replacing 1 with A, 2 woth B, ... 26 with Z
int countWays(char* digits, int n)
{
    if (n == 0 || (n == 1 && digits[0] == '0'))
        return 0;
    return countDecoding(digits, n);
}
 
int main()
{
    char digits[] = "1234";
    int n = strlen(digits);
    cout << "Count is " << countWays(digits, n);
    return 0;
}



/*

The time complexity of above the code is exponential. 
If we take a closer look at the above program, we can observe that the recursive solution is similar to Fibonacci Numbers.
Therefore, we can optimize the above solution to work in O(n) time using Dynamic Programming. 

*/

// Code (using DP) : 

#include <iostream>
#include <cstring>
using namespace std;
 
// A Dynamic Programming based function
// to count decodings
int countDecodingDP(char *digits, int n)
{
    // A table to store results of subproblems
    int count[n+1];
    count[0] = 1;
    count[1] = 1;
    //for base condition "01123" should return 0
    if(digits[0]=='0') 
         return 0;
    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
 
        // If the last digit is not 0,
        // then last digit must add to the number of words
        if (digits[i-1] > '0')
            count[i] = count[i-1];
 
        // If second last digit is smaller
        // than 2 and last digit is smaller than 7,
        // then last two digits form a valid character
        if (digits[i-2] == '1' ||
              (digits[i-2] == '2' && digits[i-1] < '7') )
            count[i] += count[i-2];
    }
    return count[n];
}
 
int main()
{
    char digits[] = "1234";
    int n = strlen(digits);
    cout << "Count is " << countDecodingDP(digits, n);
    return 0;
}
