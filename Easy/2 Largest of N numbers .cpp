///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Method-2
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;  // entering size for array

    int arr[n]; // creating array of size n
    int max;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    max = arr[0];  // initially, let max element is arr[0]

    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }

    }
    cout<<endl;
    cout<<"Largest Number: "<<max;


    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Same as above (using Function)

#include<bits/stdc++.h>
using namespace std;

int large(int a[], int n){

     int max = a[0];
     for(int i=0;i<n;i++){
          
          if(a[i] > max){
               max = a[i];
          }

     }
     return max;
}

int main(){

     int n;
     cin>>n;

     int a[n];
     for(int i=0;i<n;i++){cin>>a[i];}

     int l = large(a,n);
     cout<<"Largest : "<<l;


     return 0;
}
