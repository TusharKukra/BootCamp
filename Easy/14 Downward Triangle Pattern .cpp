Figure: 


            * * * * * * *
             * * * * * *
              * * * * *
               * * * *
                * * *
                 * *
                  *



#include<iostream>

using namespace std;

int main(){

     int rows;
     cin>>rows;

     int k = 2*rows-2;

     for(int i=rows;i>=1;i--){
          for(int j=k;j>=1;j--){
               cout<<" ";
               
          }
          k++;

          for(int j=1;j<=i;j++){
               cout<<"* ";
          }

          cout<<endl;
     }
     
     return 0;
}
