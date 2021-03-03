//Statement: 
Sonu and Titu have two Strings. They want to make their strings anagrams of each other. They can either delete a character from string of Titu and add a character to the string of Sonu. Find the minimum number of operations required to make the strings anagrams of each other.

Input Format
First line of input contains number of test cases T. Each test case contains two lines. First line contains string of Sonu and second line contains string of Titu.

Constraints
0 <= N <= 10 Length of each string <= 10^5

Output Format
For each test case print the minimum number of operations required in a new line.

Sample Input
1
abde
edg

Sample Output
3


/////////////////////////////////////////////////////////////////////////////
//Code:

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	char s1[100001];
    cin>>s1;
    // cout << s1 << endl ; 
    char s2[100001];
    cin>>s2;
    // cout << s2 << endl ; 
  int cnt=0;
	int len1;
	for(len1=0;s1[len1]!='\0';len1++)
	{}
	int len2;
	for(len2=0;s2[len2]!='\0';len2++) // earlier it was s1 
	{}
	int freq[26]={0};
	// cout << len1 << " " << len2 << endl ;
	for(int i=0;i<len1;i++)
		{
			char ch=s1[i];
			int index=ch-'a';
			freq[index]++;
		}
	for(int i=0;i<len2;i++)
		{
			char ch=s2[i];
			int index=ch-'a';
			freq[index]--;
		}
  for(int i=0;i<26;i++)
  {
cnt=cnt+abs(freq[i]);
	}
	cout<<cnt;
	cout<<endl;
	}
	return 0;	
}
