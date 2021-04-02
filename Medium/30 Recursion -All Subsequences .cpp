Print all the subsequences of a string in lexicographical order.

Input Format
First line contains an integer N, the no of strings.
Next, N lines follows one string per line.

Constraints
1 < len(str) < 20

Output Format
No of subsequences one per line

Sample Input
1  
ab
Sample Output
  
a  
ab  
b  
Explanation
4 subsequences are printed.
Empty string is a subsequence.



// Code:

#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<string>v;
void subsequences(string input,string output)
{
    
        if(input.length()==0)
        {
            v.push_back(output);
            return;
        }
    char ch=input[0];
    string ros=input.substr(1);

    
    subsequences(ros,output);
    subsequences(ros,output+ch);
}
int main ()
{
    
    string input;
    int m,n;
    cin>>m;
    for(n=0;n<m;n++)
   {
       cin>>input;
    subsequences(input,"");
    sort(v.begin(),v.end());
    int s=v.size();
    for(int i=0;i<s;i++)
    {
    cout<<v[i]<<endl;
    }
    v.clear();
}
}
