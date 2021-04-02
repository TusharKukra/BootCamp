Take as input N1 and N2, both numbers. N1 and N2 is the number of rows and columns on a rectangular board. Our player starts in top-left corner of the board and must reach bottom-right corner. In one move the player can move 1 step horizontally (right) or 1 step vertically (down) or 1 step diagonally (south-east).

a. Write a recursive function which returns the count of different ways the player can travel across the board. Print the value returned.

b. Write a recursive function which prints moves for all valid paths across the board (void is the return type for function).

Input Format
Enter the number of rows N1 and number of columns N2

Constraints
None

Output Format
Display the total number of paths and print all the possible paths in a space separated manner

Sample Input
3
3
Sample Output
VVHH VHVH VHHV VHD VDH HVVH HVHV HVD HHVV HDV DVH DHV DD
13



// Code:

#include<iostream>
#include<cstring>
using namespace std;

void Mazepath_Print(int i, int j, string s){
	if(i==0 && j==0){
		cout<<s<<" ";
		return;
	}
	if(i<0 || j<0){
		return ;
	}
	if(i>=0 && j>=0) {
	
		Mazepath_Print(i-1,j,s+"V");
	
		Mazepath_Print(i,j-1,s+"H");
	
		Mazepath_Print(i-1,j-1,s+"D");
	
	}
}

int Mazepath_D(int i, int j){
	if(i==0 || j==0){
		return 1;
	}
	return Mazepath_D(i-1,j) + Mazepath_D(i,j-1) + Mazepath_D(i-1,j-1);
}

int main(){
	int n,m;
	cin>>n>>m;
	string s;

	Mazepath_Print(n-1, m-1, s);

	cout<<endl<<Mazepath_D(n-1,m-1);
	
	return 0;
}
