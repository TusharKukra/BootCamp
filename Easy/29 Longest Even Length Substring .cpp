// Statement : 
Given a string ‘str’ of digits, find the length of the longest substring of ‘str’, such that the length of the substring is 2k digits and sum of left k digits is equal to the sum of right k digits.

Input Format
The first line of input contains an integer T denoting the number of test cases Each test case contains a string string of length N.

Constraints

Output Format
Print length of the longest substring of length 2k such that sum of left k elements is equal to right k elements and if there is no such substring print 0.

Sample Input
1
1538023
Sample Output
4



/////////////////////////////////////////////////////////
//Code: 

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		char str[100000];
		cin>>str;
	
		int n=strlen(str);
	
		if(n==1)
			cout<<0<<endl;
	
		if(n%2!=0)
			n=n-1;
		int sum1,sum2;
		while(n>0){
			for(int i=0;i<=strlen(str)-n;i++){
				int j=0;
				sum1=0;
				sum2=0;
				while(j<n/2){
					sum1+=str[i+j];
					sum2+=str[i+n/2+j];
					j++;
				}
				
			
				if(sum1==sum2){
					cout<<n<<endl;
					break;
				}
				
			
			}
				if(sum1==sum2)
					break;
				n=n-2;
				if(n==0)
					cout<<0<<endl;
			
		}
		
	}
	return 0;
}
