Take as input N, the size of a chess board. We are asked to place N number of queens in it, so that no queen can kill other.

a. Write a recursive function which returns the count of different distinct ways the queens can be placed across the board. Print the value returned.

b. Write a recursive function which prints all valid configurations (void is the return type for function).

Input Format
Enter the number N(Size of the chessboard)

Constraints
None

Output Format
Display the number of possible ways of arranging N queens and print all the possible arrangements in a space separated manner

Sample Input
4
Sample Output
{1-2} {2-4} {3-1} {4-3}  {1-3} {2-1} {3-4} {4-2}
2




// Code :

#include <iostream>
using namespace std;

bool isSafeToPlace(int board[][10], int i, int j, int n) {
	// check whether there is any queen in ith row and jth column or not
	for (int k = 0 ; k < n ; k++) {
		if (board[i][k] == 1 || board[k][j] == true) {
			return false;
		}
	}

	// for (int k = 0 ; k < n ; k++) {
	// 	if (board[k][j] == true) {
	// 		return false;
	// 	}
	// }
	// check right diagonal
	int l = i, m = j;
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j++;
	}

	i = l; j = m;
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1) {
			return false;
		}
		i--;
		j--;
	}

	return true;
}

bool NQueen(int board[][10], int i, int n, int *cnt) {
	// base case
	if ( i == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0 ; j < n ; j++) {
				if(board[i][j]==1){
					cout <<"{"<<i+1<<"-"<<j+1<<"}"<<" ";
				}
			}
			
		}
		cout << " ";
		(*cnt)++;
		
		return false;
	}


	// recursive case
	for (int j = 0 ; j < n ; j++) {
		if (isSafeToPlace(board, i, j, n)) {
			board[i][j] = 1;
			bool kyaBakiSolveHua = NQueen(board, i + 1, n, cnt);
			if (kyaBakiSolveHua == true) {
				return true;
			}
			board[i][j] = 0;
		}
	}

	return false;
}


int main() {

	int board[10][10] = {0};
	int n;
	cin >> n; // n*n
	int cnt=0;

	NQueen(board, 0, n,&cnt);
	cout<<endl<<cnt;

	return 0;
}
