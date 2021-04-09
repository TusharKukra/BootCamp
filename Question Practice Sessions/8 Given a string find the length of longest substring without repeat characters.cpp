#include<bits/stdc++.h>
using namespace std;

bool hasUniqueCharacters(string &str, int i, int j){
    int visited[256]; //represent a map
    for(int i=0;i<256;i++){
        visited[i]=0;
    }

    // s[i...j] does it contain only unique char or not


    for(int k=i;k<=j;k++){
        // check if the Kth character of the substr[i...j] has prev.  occurred or not
        if(visited[str[k]]){
            return false;
        }
        visited[str[k]]=1;
    }
    return true;
}

int main(){

    string str;
    cin>>str;

    int n = str.length(); //str.size()
    int max_len=0;

    // i iterates over all the starting points of the substring
    for(int i=0;i<n;i++){

        // j iterates over all the ending points of the substring
        for(int j=i;j<n;j++){

            // str[i......j]
            if(hasUniqueCharacters(str, i , j)){
                int length = j-i+1;
                max_len = max(max_len, length);
            }
        }
    }
    cout<<max_len<<endl;
    return 0;
}
