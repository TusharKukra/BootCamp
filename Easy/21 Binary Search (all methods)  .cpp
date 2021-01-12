// Method-1 : Binary Search using Conditional Statements: 

#include<bits/stdc++.h>
using namespace std;

// Binary Search using conditional Statements

int binarySearch(int a[], int n, int key)

{

     int start = 0;
     int end = n-1;

     while(start <= end){
     
     int mid = (start + end) / 2;

     if(a[mid]==key){

          return mid+1;
     }

     else if(a[mid] > key){

          end = mid -1;
     }

     else {

          start = mid + 1;
     }


}
     return -1;

}

int main(){

     int n;
     cin>>n;
     int a[n], key;

     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     cout<<"Enter key value : ";
     cin>>key;

     cout<<binarySearch(a,n,key);

     return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Method -2 (using Recursion)

#include<bits/stdc++.h>
using namespace std;

// Using Recursion

int binarySearch (int arr[] , int start, int end, int key){


     if(start <= end){

          int mid = start + (end - start)/2;

          if(arr[mid] == key){
               return mid;
          } 

          if(arr[mid] > key){
               return binarySearch(arr,start, mid-1, key);
          }

          else{
               return binarySearch(arr,mid+1,end,key);
          }

     }

     return -1;

}

int main(){

     int arr[] ={1,2,3,4,5,6,7};
     int n = sizeof(arr)/sizeof(int);
     int x;
     cout<<"Enter Key : ";
     cin>>x;

     int result = binarySearch(arr,0,n-1,x);
     
     (result == -1) ? cout<<"Element is not present" : cout<<"Element is present at index: "<<result;

     return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Method -3 (using STL)

#include<bits/stdc++.h>
using namespace std;

// Using STL

int main(){

     int n;
     cin>>n;
     int a[n],i;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     int k;
     cout<<"Enter Key : ";
     cin>>k;

     if(binary_search(a,a+n,k)){
          
          cout<<"Element found.";

     }
     else{
          cout<<"Element not found.";
     }
     return 0;
}
