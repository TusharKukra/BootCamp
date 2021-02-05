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

//////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {

//Count till $ Sign

char ch;
int count = 0;

//cin>>ch ; // cin ignores white spaces and new line so we use cin.get()
ch = cin.get();
while(ch != '$'){
    count++;

    ch=cin.get(); //if $ sign occur then move to the next character
}
cout<<"Total Characters : "<<count<<endl;

return 0;
}
