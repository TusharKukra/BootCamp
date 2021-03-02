#include <bits/stdc++.h> 
using namespace std; 
  
// function to find maximum number 
int maximum(int a, int b, int c) 
{ 
   return max(max(a, b), c); 
} 
  
// function to find minimum number 
int minimum(int a, int b, int c) 
{ 
   return min(min(a, b), c); 
} 
  
// Finds and prints the smallest Difference Triplet 
void smallestDifferenceTriplet(int arr1[], int arr2[], 
                                    int arr3[], int n) 
{ 
    // sorting all the three arrays 
    sort(arr1, arr1+n); 
    sort(arr2, arr2+n); 
    sort(arr3, arr3+n); 
  
    // To store resultant three numbers 
    int res_min, res_max, res_mid; 
  
    // pointers to arr1, arr2, arr3 
    // respectively 
    int i = 0, j = 0, k = 0; 
  
    // Loop until one array reaches to its end 
    // Find the smallest difference. 
    int diff = INT_MAX; 
    while (i < n && j < n && k < n) 
    { 
        int sum = arr1[i] + arr2[j] + arr3[k]; 
  
        // maximum number 
        int max = maximum(arr1[i], arr2[j], arr3[k]); 
  
        // Find minimum and increment its index. 
        int min = minimum(arr1[i], arr2[j], arr3[k]); 
        if (min == arr1[i]) 
            i++; 
        else if (min == arr2[j]) 
            j++; 
        else
            k++; 
  
        // comparing new difference with the 
        // previous one and updating accordingly 
        if (diff > (max-min)) 
        { 
            diff = max - min; 
            res_max = max; 
            res_mid = sum - (max + min); 
            res_min = min; 
        } 
    } 
  
    // Print result 
    cout << res_max << " " << res_mid << " " << res_min; 
} 
  
// Driver program to test above 
int main() 
{ 	
    int arr1[1000], arr2[1000], arr3[1000]; 
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr3[i];
	}
    smallestDifferenceTriplet(arr1, arr2, arr3, n); 
    return 0; 
} 
