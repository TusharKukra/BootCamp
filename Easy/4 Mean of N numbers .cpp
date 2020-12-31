#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum;

    sum = 0;

    for(int i=0;i<n;i++){

        sum+=a[i];
    }

    cout<<"Mean of given "<<n<<" numbers: "<<(float)sum/n;
    return 0;
}
