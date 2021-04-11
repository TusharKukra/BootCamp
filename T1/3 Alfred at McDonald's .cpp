/*
 After a big meal at McDonald's, Alfred is pondering over the number of ways in which he can
 pay for the meal. He has coins of value 1,2,5 and 10 respectively. He wants to determine
 number of ways in which he can pay an amount A.
 
 You have to return the number of ways to pay total amount.
 
 Input : An integer value denoting the total amount to be paid.
 
 Output : Return an integer value denoting the number of ways to pay the total amount
 
 Example : 
      
      Input : 5
      Output : 4

*/

// Code:

#include <bits/stdc++.h>
using namespace std;

int Ways(int input1){

    vector<long> Coins;
    Coins.push_back(1);
    Coins.push_back(2);
    Coins.push_back(5);
    Coins.push_back(10);

    vector<long> ways(input1+1);
    ways[0]=1;

    for(int i=0;i<Coins.size();i++){
        for(int j=0;j<ways.size();j++){
            if(Coins[i]<=j){
                ways[j]+=ways[(j-Coins[i])];
            }
        }
    }
    return ways[input1];
}

int main(){

    int n;
    cin>>n;

    cout<<Ways(n)<<endl;

    return 0;
}

