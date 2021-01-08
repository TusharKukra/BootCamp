#include<bits/stdc++.h>

using namespace std;

int main()
{

     // cpp program for counting characters in a string till $

     string s;
     cin>>s;

     int count=0;
     for(int i=0;s[i]!='$' && s[i]!='\0';i++){
          if(s[i]!=' '){
          
          count++;
         }
        
     }

     cout<<count;

     return 0;
}
