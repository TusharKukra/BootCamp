

// Code :

#include <bits/stdc++.h>
using namespace std;
 
// recursive function to count set bits
int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
 
    else
 
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
 
int main()
{
    int t, n;
	
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>n;
    cout << countSetBits(n)<<endl;
	}
    return 0;
}
