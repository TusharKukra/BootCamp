Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array. Note:- If the x is not found in the array, print -1 -1

Input Format
The first line contains two integers n and x. The second line contains n spaced integers.

Constraints
1<n <10^8

-1< arr[i]<10^9

Output Format
Print index of the first and last occurrences of the number x with a space in between.

Sample Input
9 7
1 3 5 5 5 5 7 123 125
Sample Output
6 6

  
 
// Code :
  
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[1000000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<i<<" ";
            break;
        }
    } 
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            cout<<i;
            break;
        }
    }
}
