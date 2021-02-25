#include <iostream>
#include <string>
#include <climits>
using namespace std;
 
bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i'
            || c == 'o' || c == 'u');
            
}
 
int longestVowel(string s)
{
    int count = 0, res = 0;
    for (int i = 0; i < s.length(); i++) 
    {
 
        // Increment current count
        // if s[i] is vowel 
        if (isVowel(s[i])) 
        count++;     
 
        else
        {
 
            // check previous value 
            // is greater then or not
            res = max(res, count);
 
            count = 0;
        }
    }
    return max(res, count);
}
 
// Driver code
int main()
{
    string s;
	getline(cin,s);
    cout << longestVowel(s) << endl;
    return 0;
}
