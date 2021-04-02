Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order. In lexicographical (dictionary) order 10, 100 and 109 will be printed before 11.

Input Format
Enter a number N.

Constraints
None

Output Format
Display all the numbers upto N in a lexicographical order

Sample Input
10
Sample Output
0 1 10 2 3 4 5 6 7 8 9 
  
  
// Code:
  
#include <iostream>
using namespace std;


void dfs(int i, int n){
  
    if(i>n){
        return;
    }
    cout<<i<<" ";
    for(int j=0;j<10;j++){
        dfs(10*i+j,n);
    }
   
}
int main() {
	int n;
	cin>>n;
	cout<<"0"<<" ";
	  for(int i=1;i<=9;i++){
	      dfs(i,n);
	  }
	return 0;
}
