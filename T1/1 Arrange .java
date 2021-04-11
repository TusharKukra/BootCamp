/*  Rearrange Odd and Even values in Alternate Fashion in Ascending Order

Given an array of integers (both odd and even), the task is to arrange them in such a way that odd and even values come in alternate fashion in non-decreasing order(ascending) respectively.

If the smallest value is Even then we have to print Even-Odd pattern.
If the smallest value is Odd then we have to print Odd-Even pattern.
Note: No. of odd elements must be equal to No. of even elements in the input array.

*/

Code :

//C-plus-plus

#include <bits/stdc++.h>
using namespace std;
  
void AlternateRearrange(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
  
    vector<int> v1; // to insert even values
    vector<int> v2; // to insert odd values
  
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            v1.push_back(arr[i]);
        else
            v2.push_back(arr[i]);
  
    int index = 0, i = 0, j = 0;
  
    bool flag = false;
  
    // Set flag to true if first element is even
    if (arr[0] % 2 == 0)
        flag = true;
  
    // Start rearranging array
    while (index < n) {
  
        // If first element is even
        if (flag == true) {
            arr[index++] = v1[i++];
            flag = !flag;
        }
  
        // Else, first element is Odd
        else {
            arr[index++] = v2[j++];
            flag = !flag;
        }
    }
  
    // Print the rearranged array
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}
  
int main()
{
    int arr[10001] ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    AlternateRearrange(arr, n);
    return 0;
}


// JAVA Code :

import java.util.* ;
  
class Main
{
  
    static void AlternateRearrange(int arr[], int n) 
    { 
        // Sort the array
          
        // Collection.sort() sorts the
        // collection in ascending order
        Arrays.sort(arr) ;
          
        Vector v1 = new Vector(); // to insert even values 
        Vector v2 = new Vector(); // to insert odd values 
      
        for (int i = 0; i < n; i++) 
            if (arr[i] % 2 == 0) 
                v1.add(arr[i]); 
            else
                v2.add(arr[i]); 
      
        int index = 0, i = 0, j = 0; 
      
        boolean flag = false; 
      
        // Set flag to true if first element is even 
        if (arr[0] % 2 == 0) 
            flag = true; 
      
        // Start rearranging array 
        while (index < n) 
        { 
      
            // If first element is even 
            if (flag == true) 
            { 
                arr[index] = (int)v1.get(i); 
                i += 1 ;
                index += 1 ;
                flag = !flag; 
            } 
      
            // Else, first element is Odd 
            else
            { 
                arr[index] = (int)v2.get(j) ; 
                j += 1 ;
                index += 1 ;
                flag = !flag; 
            } 
        } 
      
        // Print the rearranged array 
        for (i = 0; i < n; i++) 
            System.out.print(arr[i] + " "); 
    } 
      
    public static void main(String []args) 
    { 
        int arr[] = { 9, 8, 13, 2, 19, 14 }; 
        int n = arr.length ;
      
        AlternateRearrange(arr, n); 
    } 
}
