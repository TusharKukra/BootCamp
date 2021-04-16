#include <bits/stdc++.h>
using namespace std;

/*
Given a digit sequence, generate the possible decodings of the given digit sequence.

Let,

1 ---> 'A'
2 ---> 'B'
3 ---> 'C'
.
.
.
26 ---> 'Z'

It may be assumed that the input contains valid digits from 0 to 9 and
there are no loading 0's , no extra trailing 0's, and no two or more consecutive 0's.
*/

void generateDecoding(char *inp, char *out, int i, int j)
{

    // BASE CASES:
    // I have reached the end of the  input array
    if (inp[i] == '\0')
    {
        // terminate & print the output
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // i am standing at the ith degit of the input & i have make a decision.

    // 1. Include only the ith digit
    // 1.1  Extract the ith digit from the input
    int digit = inp[i] - '0'; // subtracting our character value from 0 gives us the integer value from the character value.
                              // eg: '2' - '0' = 50-48 = 2

    if(digit!=0){ // important : the 1st digit must not be zero

    // 1.2 map the ith digit to its character
    char ch = digit + 'A' - 1; // 1 + 'A' -1 = 1+65-1 =65 = 'A'
                               // 2 + 'A' -1 = 2+65-1 =66 = 'B'

    // 1.3 Write the character to the jth index of output
    out[j] = ch;

    // 1.4 Recursion
    generateDecoding(inp, out, i + 1, j + 1);

    // 2. form a number using ith & (i+1)th digit and decode it.
    // 2.1 Extract the (i+1)th digit

    if (inp[i + 1] != '\0') // corner case : 1  (if we dont use that then we get Segmentation Fault)
    {

        int next_digit = inp[i + 1] - '0';

        // 2.2 Form a number using the ith and (i+1)th digit
        int number = digit * 10 + next_digit; // 1, 2 = 1*10 + 2 = 12

        if (number <= 26)  // corner case : 2
        {
            // 2.3 Map the number to its character
            ch = number + 'A' - 1;

            // 2.4 Update the jth index of output
            out[j] = ch;

            // 2.5 Recursion
            generateDecoding(inp, out, i + 2, j + 1);
        }
    }
}
}

int main()
{

    char inp[100];
    cin >> inp;

    char out[100];

    generateDecoding(inp, out, 0, 0); // 0 = inp / output array [starting points]

    return 0;
}
