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
