You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from a position towards left, right, up or down on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M) where it's cheese is waiting for. There exits a unique path in the grid . Find that path and help the rat reach its cheese.

Input Format
First line contains 2 integers N and M denoting the rows and columns in the grid.
Next N line contains M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

Constraints
1 <= N , M <= 10

Output Format
Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If a path does not exits then print "NO PATH FOUND"

Sample Input
5 4
OXOO
OOOX
XOXO
XOOX
XXOO
Sample Output
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 0 
0 0 1 1 



// Code :

#include<bits/stdc++.h>
using namespace std;
bool ratInMaze(char maze[][11],int sol[][10],int i, int j, int n, int m)
{
    //To check for the first and the last cell also.
    if(maze[i][j]=='X')
        return false;

      if(i==n && j==m)
      {
            sol[n][m]=1;
            //print the path
            for(int k=0;k<=n;k++)
            {
                  for(int l=0;l<=m;l++)
                        cout<<sol[k][l]<<" ";
                  cout<<endl;
            }
            //cout<<endl;
            return true;
      }

    //To prevent rat from moving out of the grid
    if(i>n||j>m||i<0||j<0){
        return false;
    }
    
    bool right=false,down=false,up=false,left=false;
    sol[i][j] = 1;
    
    //for moving down
    if(sol[i+1][j]==0){
        down = ratInMaze(maze,sol,i+1,j,n,m);
    }

    //for moving right
    if(sol[i][j+1]==0 && !down){
        right = ratInMaze(maze,sol,i,j+1,n,m);
    }

    //for moving up
    if(sol[i-1][j]==0 && !down && !right){
        up = ratInMaze(maze,sol,i-1,j,n,m);
    }

    //for moving down
    if(sol[i][j-1]==0 && !down && !right && !up){
        left = ratInMaze(maze,sol,i,j-1,n,m);
    }
    
    //Checking if there is a path or not.
    if(right||down||left||up){
        return true;
    }
    
    sol[i][j] = 0;
    
    return false;
}

int main()
{
      int n,m;
      cin>>n>>m;
      char maze[n][11];
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      cin>>maze[i][j];
      
      int sol[n][10]={0};
    //   sol[0][0]=1;
    //   sol[n-1][m-1]=1;
      bool ans = ratInMaze(maze,sol,0,0,n-1,m-1);
      if(ans==false)
            cout<<"NO PATH FOUND";
}
