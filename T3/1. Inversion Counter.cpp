/*
Statement :

Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, but if the array is sorted in the reverse order, the inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j 
Example: 

Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).


Input: arr[] = {3, 1, 2}
Output: 2

Explanation: Given array has two inversions:
(3, 1), (3, 2) 

METHOD 1 (Simple)  

Approach: Traverse through the array, and for every index, find the number of smaller elements on its right side of the array. This can be done using a nested loop. Sum up the counts for all index in the array and print the sum.
Algorithm: 
Traverse through the array from start to end
For every element, find the count of elements smaller than the current number up to that index using another loop.
Sum up the count of inversion for every index.
Print the count of inversions.


*/

// Code :

#include <bits/stdc++.h>
using namespace std;
 
int getInvCount(int* arr, int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}
 
int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    cout << getInvCount(arr, n);
    return 0;
}
