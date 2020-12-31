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
