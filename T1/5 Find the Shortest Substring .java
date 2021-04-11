/*

Find the smallest window in a string containing all characters of another string.

Given two strings string1 and string2, the task is to find the smallest substring in string1 containing all characters of string2 efficiently. 

Examples: 

Input: string = “this is a test string”, pattern = “tist” 
Output: Minimum window is “t stri” 
Explanation: “t stri” contains all the characters of pattern.

Input: string = “geeksforgeeks”, pattern = “ork” 
Output: Minimum window is “ksfor”


Method 1 ( Brute force solution ) 
1- Generate all substrings of string1 (“this is a test string”) 
2- For each substring, check whether the substring contains all characters of string2 (“tist”) 
3- Finally, print the smallest substring containing all characters of string2.
  
Method 2 ( Efficient Solution ) 

First check if the length of the string is less than the length of the given pattern, if yes then “no such window can exist “.
Store the occurrence of characters of the given pattern in a hash_pat[].
we will be using two pointer technique basically
Start matching the characters of pattern with the characters of string i.e. increment count if a character matches.
Check if (count == length of pattern ) this means a window is found.
If such a window found, try to minimize it by removing extra characters from the beginning of the current window.
delete one character from first and again find this deleted key at right, once found apply step 5 .
Update min_length.
Print the minimum length window.

*/

// Code :
#include <bits/stdc++.h>
using namespace std;
 
const int no_of_chars = 256;
 
// Function to find smallest
// window containing
// all characters of 'pat'
string findSubString(string str, string pat)
{
    int len1 = str.length();
    int len2 = pat.length();
 
    // Check if string's length
    // is less than pattern's
    // length. If yes then no such
    // window can exist
    if (len1 < len2) {
        cout << "No such window exists";
        return "";
    }
 
    int hash_pat[no_of_chars] = { 0 };
    int hash_str[no_of_chars] = { 0 };
 
    // Store occurrence ofs characters
    // of pattern
    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
 
    // Start traversing the string
    // Count of characters
    int count = 0;
    for (int j = 0; j < len1; j++) {
       
        // Count occurrence of characters
        // of string
        hash_str[str[j]]++;
 
        // If string's char matches with
        // pattern's char
        // then increment count
        if (hash_str[str[j]] <= hash_pat[str[j]])
            count++;
 
        // if all the characters are matched
        if (count == len2) {
           
            // Try to minimize the window
            while (hash_str[str[start]]
                       > hash_pat[str[start]]
                   || hash_pat[str[start]] == 0) {
 
                if (hash_str[str[start]]
                    > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }
 
            // update window size
            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 
    // If no window found
    if (start_index == -1) {
        cout << "No such window exists";
        return "";
    }
 
    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
}
 
int main()
{
    string str, pat ;
    getline(cin, str);
    getline(cin, pat);
 
    cout<< findSubString(str, pat);
    return 0;
}
