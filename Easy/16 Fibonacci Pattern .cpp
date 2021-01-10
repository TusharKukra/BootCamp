Example:

0 
1    1 
2    3     5 
8   13    21    34

Code:

#include<bits/stdc++.h>
using namespace std;

int main(){
     int row;
     cin>>row;
     
     int a,b,c;
     a=0;
     b=1;
     for(int i=0;i<row;i++){
          
          for(int j=0;j<i;j++){

               cout<<a<<" ";
               c=a+b;
               a=b;
               b=c;
          }

          cout<<endl;
     }
     
     return 0;
}
