//Method :1

#include <bits/stdc++.h> 
using namespace std; 
  
int sumBitDifferences(int arr[], int n) 
{ 
    int ans = 0; // Initialize result 
  
    // traverse over all bits 
    for (int i = 0; i < 32; i++) { 
        // count number of elements with i'th bit set 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if ((arr[j] & (1 << i))) 
                count++; 
  
        // Add "count * (n - count) * 2" to the answer 
        ans += (count * (n - count) * 2); 
    } 
  
    return ans; 
} 
  
int main() 
{ 
    int arr[1001]; 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout << sumBitDifferences(arr, n) << endl; 
    return 0; 
} 
