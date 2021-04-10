#include<bits/stdc++.h>
using namespace std;

// Given a matrix [which is represented by its dimensions]
// count number of ways to reach bottom right from top left.
// we can move either right (i+1,j) or down (i,j+1).

// we have to count the number of paths that can take us from top-left cell to the bottom-left cell.

int countPaths(int i, int j, int n, int m){

    //base case:
    if(i==n-1 && j==m-1){

        // I have found a path from TL->BR
        return 1;
    }

    //another base case for Out of Bound Error
    if(i==n or j==m){
        // I have gone out of bound
        return 0;  // bcoz max values are n-1, m-1. So, if we go beyond any of them then it will be OOB error
    }

    // I am standing at the (i,j) cell of the matrix & i have to make a decision.

    // 1. Go right 
    int X = countPaths(i,j+1,n,m);

    // 2. Go down
    int Y = countPaths(i+1,j,n,m);

    return X+Y;

}

int main(){

    int n; //rows
    cin>>n;

    int m; //columns
    cin>>m;

    cout<<countPaths(0,0,n,m)<<endl; //0,0,n-1,m-1 are the starting and ending points (extreme points)

    return 0;
}

