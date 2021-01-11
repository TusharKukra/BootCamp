// Method -1 (using Basics)

#include<bits/stdc++.h>
using namespace std;

int main(){

     int num, remainder, reverse=0;
     cout<<"Enter any number : ";
     cin>>num;

     while(num!=0){
          remainder = num%10;
          reverse = remainder + (reverse*10);
          num = num/10;
     }

     cout<<endl;
     cout<<"Reverse of given number is : "<<reverse;

     return 0;
}


// Method -2 (using STL and String)

#include<bits/stdc++.h>
using namespace std;

int main(){

     string s;
     getline(cin,s);
     
     reverse(s.begin(),s.end());

     cout<<endl<<s;


     return 0;
}
