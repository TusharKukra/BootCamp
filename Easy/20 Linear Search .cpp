#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int a[], int n, int key){

     for(int i=0;i<n;i++){
          if(a[i]==key){
               cout<<"Position of key value is : "<<i+1;
          }
     }


}

int main(){

     int arr[] = {10,20,30,40,50};
     int n = sizeof(arr)/sizeof(int);
     int key = 50;

     LinearSearch(arr,n,key);

     return 0;
}
