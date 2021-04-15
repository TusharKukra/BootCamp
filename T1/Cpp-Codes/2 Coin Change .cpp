#include <bits/stdc++.h>
using namespace std;
 
/*
Given an amount and the denomination of coins available,
determine how many ways change can be made for amount.

There is a limitless supply of each coin type.
*/

int countCoinChange(int n, int* coins, int m, int i, multiset<int>& ms){

    // base cases
    if(n==0){
        // i have found the coin change 
        cout<<"{";
        for(auto it = ms.begin(); it!=ms.end();it++){
            cout<<*it<<" ";
        }
        cout<<"}";
        return 1;
    }

    if(n<0){
        // i have an invalid coin change
        return 0;
    }

    if(n>0 && i==m){
        // i have to find the correct coin configuration , i==m means that our coin value must lie within our coin array
        return 0;
    }

    // i am standing at the ith coin & i have to make a decision.

    // 1. Include ith coin to the change configuration
    ms.insert(coins[i]);
    int X = countCoinChange(n-coins[i], coins, m, i, ms);

    // 2. Do not include the ith coin to the change configuration
    ms.erase(ms.lower_bound(coins[i]));  //it will erase one occurrence of i
    int Y = countCoinChange(n , coins, m, i+1, ms);

    return X+Y;
}   

int main(){

    int n;
    cin>>n; //amount

    // Ask the user how many coins do we have
    int m;
    cin>>m;

    // value of coins
    int* coins = new int[m]; //dynamic allocation of array
    for(int i=0;i<m;i++){
        cin>>coins[i];
    }
    // to print the configuration also : using multiset

    multiset<int> ms;

    cout<<countCoinChange(n,coins,m,0 ,ms)<<endl;  // initially we will be at 0th coin so we'll decide further


    return 0;
}

