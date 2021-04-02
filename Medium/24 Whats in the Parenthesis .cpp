Take as input str, a string. The string contains a single pair of parenthesis “(..)”. Write a recursive function which returns the contents between the parenthesis. E.g. for “xyz(abc)def” return “abc”. Print the value returned.

Input Format
Enter the string

Constraints
None

Output Format
Display the content between the parenthesis

Sample Input
abc(x)
Sample Output
x


// Code: 

#include<iostream>
using namespace std;
int main() {
	char ch[100000];
	cin>>ch;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='(')
		{
			for(int j=i+1;ch[j]!=')';j++)
			{
				cout<<ch[j];
			}
		}
	}
	return 0;
}
