#include<bits/stdc++.h>
using namespace std;

/*
Given a matrix where every cell has some number of coins.
Count the number of ways to reach bottom right from top left with exactly k coins.

*/

int countPathsBottomToTop(int** matrix, int n, int m, int k){

    //base case:
    if(n==0 && m==0){
        // if(k-matrix[n][m]==0){
        // // I have found a path from TL->BR
        // return 1;
        // }
        // else{
        //     return 0; // not been able to find that path which have sum = k.
        // }

        return k==matrix[n][m];
    }

    //another base case for Out of Bound Error
    if(n<0 or m<0){
        // I have gone out of bound
        return 0;  // bcoz max values are n-1, m-1. So, if we go beyond any of them then it will be OOB error
    }

    // I am standing at the (i,j) cell of the matrix & i have to make a decision.

    // 1. Go left
    int X = countPathsBottomToTop(matrix, n,m-1, k-matrix[n][m]);

    // 2. Go up
    int Y = countPathsBottomToTop(matrix, n-1,m, k-matrix[n][m]);

    return X+Y;

}

int main(){

    int n; //rows
    cin>>n;

    int m; //columns
    cin>>m;

    //defining a matrix
    int** matrix = new int*[n];
    for(int i=0;i<n;i++){
        matrix[i]= new int[m];
    }

    //read matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    //read the value of k
    int k;
    cin>>k;

    cout<<countPathsBottomToTop(matrix, n-1, m-1, k)<<endl;
    return 0;
}
