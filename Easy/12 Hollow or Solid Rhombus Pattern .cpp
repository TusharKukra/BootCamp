// Solid Rhombus 

    *****
   *****
  *****
 *****
*****

#include <bits/stdc++.h>

using namespace std;

int main() {

     int rows;
     cout<<"Enter no. of rows : ";
     cin>>rows;

     for(int i=1;i<=rows;i++){
          
          for(int j=1;j<=rows-i;j++){
               cout<<" ";
          }

          for(int j=1;j<=rows;j++){
               cout<<"*";
          }

          cout<<endl;
     }     

     return 0;
}


// Hollow Rhombus

     ******
    *    *
   *    *
  *    *
 *    *
******


#include <bits/stdc++.h>

using namespace std;

int main() {

     int rows;
     cout<<"Enter no. of rows : ";
     cin>>rows;

     for(int i=1;i<=rows;i++){
          
          for(int j=1;j<=rows-i;j++){
               cout<<" ";
          }

          for(int j=1;j<=rows;j++){

               if(i==1 || i==rows || j==1 || j==rows){
                    cout<<"*";
               }

               else{
                    cout<<" ";
               }

          }

          cout<<endl;
     }     

     return 0;
}
