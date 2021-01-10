Figure:

1 2 3 4 5 6
1 2 3 4 5 *
1 2 3 4 * * *
1 2 3 * * * * *
1 2 * * * * * * *
1 * * * * * * * * *


Code:

#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,j;
     cin>>row;
     int k = 2*row+1;
     for(int i=row;i>=1;i--){

          for(int j=1;j<=i;j++){
               cout<<j<<" ";

          }
          for(int j=0;j<2*(row-i)-1;j++){
               
               cout<<"* ";
          }

          cout<<endl;
     }
     
     return 0;
}
