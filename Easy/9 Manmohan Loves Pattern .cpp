Problem Statement: 

Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format
Single integer N denoting number of lines of the pattern.

Constraints
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004

Explanation
If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.



Code:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    
    for(int i = 0 ;i<rows;i++){

        if(i==0){
            cout<<"1"<<endl;
        }

        else{

            for (int j=0;j<=i;j++){

                if(j==0 || j==i){
                    
                    cout<<i;
                }

                else {
                    cout<<"0";
                }

            }

            cout<<endl;
        }
    }
    
    return 0;
}
