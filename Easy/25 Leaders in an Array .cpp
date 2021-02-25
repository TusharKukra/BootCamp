//Method -1 (Simple Method) [Not Efficient -O(n^2)]

#include<iostream> 
using namespace std; 
  
void printLeaders(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        int j; 
        for (j = i+1; j < size; j++) 
        { 
            if (arr[i] < arr[j]) 
                break; 
        }     
        if (j == size) // the loop didn't break 
            cout << arr[i] << " "; 
  } 
} 
  
int main() 
{ 
    int arr[10001]; 
    int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    printLeaders(arr, n); 
    return 0; 
}


//////////////////////////////////////////////////////////////////////////////

//Method -2 (Scan from Right) [Efficient -O(n)]
#include <iostream> 
using namespace std; 
  
void printLeaders(int arr[], int size) 
{ 
    int max_from_right =  arr[size-1]; 
  
    // Rightmost element is always leader 
    cout << max_from_right << " "; 
      
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right <= arr[i])  
        {            
            max_from_right = arr[i]; 
            cout << max_from_right << " "; 
        } 
    }     
} 
  
int main() 
{ 
    int arr[10001]; 
    int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    printLeaders(arr, n); 
    return 0; 
}
