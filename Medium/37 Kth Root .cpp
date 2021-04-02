You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

Input Format
First line contains number of test cases, T. Next T lines contains integers, n and k.

Constraints
1<=T<=10
1<=N<=10^15
1<=K<=10^4

Output Format
Output the integer x

Sample Input
2
10000 1
1000000000000000 10
Sample Output
10000
31
Explanation
For the first test case, for x=10000, 10000^1=10000=n


// Code :

#include <iostream>
#include<math.h>
#define ll long long
using namespace std;

bool is_Answer(ll n,ll k,ll ans){
    
    if(pow(ans,k)<=n)
    return true;
    return false;
    
}

int main() {
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,k;
        cin>>n>>k;
        ll s=1,e=n;
        ll ans=0;
        while(s<=e){
            ll mid=(s+e)/2;
            if(is_Answer(n,k,mid)){
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
