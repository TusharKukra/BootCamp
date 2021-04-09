#include<bits/stdc++.h>
using namespace std;

//we can solve this using String Tokenizer

int main(){

    string str;
    getline(cin,str);

    string word;
    cin>>word;

    int cnt = 0;

    char* p =strtok((char *)str.c_str(), " "); // strtok do not take string as parameter thats why we use char array

    while(p!=NULL){
        
        
        string token(p); // converting char array into a string
        if(token==word){
            // I have found a word in the string
            cnt++;
        }
        p = strtok(NULL, " "); // to get next token in the string
    }

    cout<<cnt<<endl;

    return 0;
}
