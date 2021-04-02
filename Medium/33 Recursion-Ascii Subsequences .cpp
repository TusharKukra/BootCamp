Take as input str, a string. We are concerned with all the possible ascii-subsequences of str. E.g. “ab” has following ascii-subsequences “”, “b”, “98”, “a”, “ab”, “a98”, “97”, “97b”, “9798”

a. Write a recursive function which returns the count of ascii-subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible ascii-subsequences for a given string (void is the return type for function).

Input Format
Enter the string

Constraints
None

Output Format
Display the number of ASCII-subsequences and display all the ASCII- subsequences

Sample Input
ab
Sample Output
 b 98 a ab a98 97 97b 9798
9



// Code :

#include<iostream>
using namespace std;
int t=0;
 
void FindSub(string str, string res,
             int i)
{
	
     
  
    if (i == str.length())
    {
     
        if (res.length() > 0)
        {
           cout << " "<< res ;
		   t++;
        }
        return;
    }

    char ch = str[i];
 

    FindSub(str, res, i + 1);
 
   
    FindSub(str, res + ch, i + 1);
 
    FindSub(str, res + to_string(int(ch)), i + 1);
}

int main()
{
    string str ;
    string res = "";
     cin>>str;
  
    int N = str.length();
 
    FindSub(str, res, 0);
	cout<<endl<<t+1;
}
