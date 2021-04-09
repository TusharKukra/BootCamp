//Method -1

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

    int left =0,right =0;

    // i iterates over all the starting points of the substring
    for(int i=0;i<n;i++){

        // j iterates over all the ending points of the substring
        for(int j=i;j<n;j++){

            // str[i......j]
            if(hasUniqueCharacters(str, i , j)){
                int length = j-i+1;
                if(length>max_len){
                    max_len=length;
                    left=i;
                    right=j;
                }
                // max_len = max(max_len, length);
            }
        }
    }
    cout<<max_len<<endl;
    for(int k=left;k<=right;k++){
        cout<<str[k]<<"";
    }
    cout<<endl;
    return 0;
}


//Method -2 (Sliding Window -Approach-1)

#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    cin>>str;

    int n = str.length(); //str.size()
    int max_len=0;

    int left =0,right =0;

    // i iterates over all the starting points of the substring
    for(int i=0;i<n;i++){
        int visited[256];  //created a map
        for(int k=0;k<256;k++){
            visited[i]=0;
        }
        // j iterates over all the ending points of the substring
        for(int j=i;j<n;j++){
            // str[i......j]
            if(visited[str[j]]){
                //reset & slide
                break;
            }
            else{
                //expand the window
                int length = j-i+1;
                if(length>max_len){
                    max_len=length;
                    left=i;
                    right=j;
                }
                visited[str[j]]=1;
            }   
            
        }
    }
    cout<<max_len<<endl;
    for(int k=left;k<=right;k++){
        cout<<str[k]<<"";
    }
    cout<<endl;
    return 0;
}


//Method -3 (Sliding Window -Efficient Approach)

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    int visited[256];
    for(int i=0;i<256;i++){
        visited[i] = -1; //firstly put it -1 then update it to 0
    }

    visited[str[0]]=0;
    int cur_len=1;
    int max_len=1;

    int n = str.size(); 
    for(int i=1;i<n;i++){
        int last_occurrence = visited[str[i]];
        if(last_occurrence == -1 || last_occurrence < i-cur_len){
            //expand the window
            cur_len++;
        }
        else{
            //shrink the window
            cur_len = i-last_occurrence;
        }
        visited[str[i]] = i;
        max_len = max(max_len,cur_len);
    }
    cout<<max_len<<endl;

    return 0;
}
