// Example: 
str : A B C A B C   (N)
pattern : ABC    (M)
O/P : 2     (N>M)


// Method -1 (Naive Approach)

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    string pattern;
    cin>>pattern;

    int N = str.length();
    int M = pattern.length();

    int freq = 0;

    for(int i=0;i<=N-M;i++){
        int j;
        for(j=0;j<M;j++){
            if(str[i+j] != pattern[j]){
                //this means jth Character of the Substring 
                //starting at index i did not match with the jth char of the pattern.

                // when there is mismatch of character, then break

                break;
            }
        }
        if(j==M){
            //pattern found
            freq++;
        }
    }
    cout<<freq<<endl;
    return 0;
}
