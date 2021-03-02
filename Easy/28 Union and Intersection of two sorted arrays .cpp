#include <bits/stdc++.h> 
using namespace std; 
  
/* Function prints Intersection of arr1[] and arr2[] 
m is the number of elements in arr1[] 
n is the number of elements in arr2[] */
void printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        } 
    } 
}

void printUnion(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
  
    /* Print remaining elements of the larger array */
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 
} 
  
int main() 
{ 
    int arr1[1001], arr2[1001];
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>arr1[i];
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	} 
	
	printUnion(arr1,arr2,m,n);
	cout<<endl;
    printIntersection(arr1, arr2, m, n); 
    return 0; 
} 
