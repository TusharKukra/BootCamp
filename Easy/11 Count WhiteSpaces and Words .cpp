#include <bits/stdc++.h>

using namespace std;

int main() {
   string s;
   cout<<"Enter String: ";
   getline(cin,s);

   int count = 0;
   int length = s.size();

   for(int i=0;i<length;i++){
        if(isspace(s.at(i))){    //int isspace ( int c );  (Checks whether c is a white-space character.)
             count++;
        }
   }
     int wordLength = length - count;
   cout<<endl;

     cout<<"Number of Spaces in the given string : "<<count<<endl;
     cout<<"Number of words in the given string : "<<wordLength;
    return 0;
}

