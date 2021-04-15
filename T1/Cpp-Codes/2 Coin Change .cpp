#include <bits/stdc++.h>
using namespace std;
 
/*
Given an amount and the denomination of coins available,
determine how many ways change can be made for amount.

There is a limitless supply of each coin type.
*/

int countCoinChange(int n, int* coins, int m, int i){

    // base cases
    if(n==0){
        // i have found the coin change 
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
    int X = countCoinChange(n-coins[i], coins, m, i);

    // 2. Do not include the ith coin to the change configuration
    int Y = countCoinChange(n , coins, m, i+1);

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

    cout<<countCoinChange(n,coins,m,0)<<endl;  // initially we will be at 0th coin so we'll decide further


    return 0;
}

