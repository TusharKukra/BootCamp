#include<bits/stdc++.h>

#define getArray for(int i=0;i<n;i++){cin>>a[i];}
#define printArray for(int i=0;i<n;i++){cout<<a[i];}

using namespace std;


// Bubble Sort (using Array)

void Bubble(int a[], int n){

     for(int i=1;i<=n;i++){

          for(int j=1;j<=n-i;j++){   // here we use j<=n-i because after every pass we get our last element so decrease i after every pass 

               if(a[j]>a[j+1]){

                    swap(a[j],a[j+1]);
               }
          }
     }
}

int main(){

     int n;
     cin>>n;
     int a[n];
     getArray;
     Bubble(a,n);
     printArray;
     return 0;
}
