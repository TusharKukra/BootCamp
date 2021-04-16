#include <bits/stdc++.h>
using namespace std;

/*
Given two strings string1 & string2, the task is to 
Find the smallest substring in strings: containing all characters of string2 efficiently.
*/

string getMinLenWindow(string text, string pattern){

    // checking corner case: if(M>N) --> no window
    int N = text.size();
    int M = pattern.size();

    string window= "";

    // corner case:
    if(M>N){
        // no such window
        return window;
    }

    int pattern_freq_map[256]={0}; // here we use 256 because there are total 256 characters in ASCII Table.
    for(int i=0;i<M; i++){
        char ch = pattern[i];
        pattern_freq_map[ch]++;
    }

    int window_freq_map[256]={0}; // window freq map we will create it dynamically : by expanding or shrinking of window.
    
    int i=0; // indicate the start index of my window
    int min_len = INT_MAX;
    int start_idx = -1;  

    for(int j=0;j<N;j++){
        char ch = text[j];

        // expand the window
        window_freq_map[ch]++;  // we are updating the freq of the character in window.


        // check if window is valid, HOW ?
        if(WINDOW_IS_VALID){
            // contract / shrink the window to remove unwanted characters

            // 1. if a character is not presesnt in the pattern.
            // 2. if a character is present in the pattern but is in excess in the window (talking about freq).

            char temp = text[i];
            while(pattern_freq_map[temp]==0 or pattern_freq_map[temp] < window_freq_map[temp]){

                // start shrinking
                window_freq_map[temp]--;  // as we are shrinking then we are reducing the freq of temporary characters.
                i++;  // moving the start pointer 
                temp = text[i]; // update the temp
            }

            int window_len = j-i+1;
            if(window_len<min_len){
                min_len = window_len;

                start_idx = i;
            }

        }
    }

    if(start_idx != -1){
        window = text.substr(start_idx, min_len);
    }
    return window;


}

int main(){

    string text;
    getline(cin, text);

    string pattern;
    getline(cin, pattern);

    string window = getMinLenWindow(text, pattern);
    cout<<window<<" "<<window.size();

    return 0;
}

