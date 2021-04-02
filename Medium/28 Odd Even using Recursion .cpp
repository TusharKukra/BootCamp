Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion

Input Format
Constraints
1 <= N <=1000

Output Format
Sample Input
5
Sample Output
5
3
1
2
4



// Code:

#include<iostream>
using namespace std;

void odd(int n){
    if(n<1){
        return;
    }
    else{
    cout<<n<<endl;    
    odd(n-2);
    }
}

void even(int e,int n){
    if(e>n){
        return;
    }
   cout<<e<<endl;
   even(e+2,n);
    
    
}

int main(){
    int n;
    cin>>n;
    if(n%2!=0){
    odd(n);
    even(2,n);
    }
    else{
         odd(n-1);
    even(2,n);
    }
}
