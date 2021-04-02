Given N positive numbers, your task is to calculate their HCF.

Input Format
First line of input contains a single integer N, second line contains N space separated positive integers whose HCF is to be computed.

Constraints
N <= 10 and all the numbers lie between 1 and 100.

Output Format
Print HCF of N numbers.

Sample Input
3
2 4 6
Sample Output
2


// Code :

#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int findgcd(int ar[10000],int N)
{
    int result=ar[0];
    for(int i=0;i<N;i++)
    {
        result=gcd(result,ar[i]);
    }
    return result;
}
int main() 
{
	int N;
	cin>>N;
	int ar[10000];
	for(int i=0;i<N;i++)
	{
	    cin>>ar[i];
	}
	int y=findgcd(ar,N);
	cout<<y;
	return 0;
}
