// Brute Force Method (Not very efficient)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m=0,flag=0;

    cout<<"Enter the number to check: ";
    cin>>n;

    m = n/2;
    for(int i=2;i<=m;i++){

        if(n%i==0){

            cout<<"Given Number is not Prime."<<endl;
            flag = 1;
            break;
        }
    }

    if(flag==0){
        cout<<"Given Number is Prime."<<endl;
    }

    return 0;
}
