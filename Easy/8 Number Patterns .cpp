///////////////////////////////////////////////////////////////////////////////////

// 1 Half Pyramid of * 

#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1;i<=rows;i++){

         for(int j=1;j<=i;j++){
             
             cout<<"*";
         }
         cout<<endl;
     }
     
	return 0;
}


//////////////////////////////////////////////////////////////////////////////////

// 2 Half Pyramid of Numbers 

#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1;i<=rows;i++){

         for(int j=1;j<=i;j++){
             
             cout<<j<<" ";
         }
         cout<<endl;
     }
     
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 3 Half Pyramid of Alphabets


#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     char alphabets = 'A';
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1 ; i <= rows ; i++){

         for(int j=1;j<=i;j++){
             
             cout<<alphabets++<<" ";
         }


         cout<<endl;
     }
     
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 3 Inverted Half Pyramid of *

