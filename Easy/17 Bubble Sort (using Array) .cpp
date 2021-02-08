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


///////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>

using namespace std;

// Bubble Sort

int main(){

    int arr[5] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof (int);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Bubble Sort Logic (compare consecutive elements and swap them accordingly)
 
    for(int i=0;i<n-1;i++){  // there will be total n-1 comparisions
        for(int j=0;j<n-i-1;j++){  // after every comparision one element got its place now do comparision of remaining elements
            swap(arr[j], arr[j+1]);             
        }
    }

    // print sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
