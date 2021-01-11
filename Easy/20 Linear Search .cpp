#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int key){

     for(int i=0;i<n;i++){
          if(a[i]==key){
               return i+1;
          }
          
     }
     return -1;


}

int main(){

     int arr[] = {10,20,30,40,50};
     int n = sizeof(arr)/sizeof(int);
     int key = 50;

     int result = LinearSearch(arr,n,key);

     if(result == -1){
          cout<<"Key Not Found !!!";
     }
     else{
          cout<<"Key found at Position : "<<result;
     }

     return 0;
}
