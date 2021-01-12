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


// Method -2 (using Recursion)





//Method -3 (using STL)
