#include <iostream>
#include <climits>
using namespace std;

/*
Given two strings string1 & string2, the task is to 
Find the smallest substring in strings: containing all characters of string2 efficiently.
*/

string getMinLenWindow(string text, string pattern){

    int N = text.size();
    int M = pattern.size();

    string window = "";
    // corner case :
    if(M>N){
        // no window exists
        return window;
    }

    // now create frequency map for text and for the pattern

    int pattern_freq_map[256]= {0};  // initially out pattern map has all the values = 0 , then later we will add every characters
    for(int i=0;i<M;i++){
        char ch = pattern[i]; // put every letter in pattern array
        pattern_freq_map[ch]++;
    }

    int window_freq_map[256] = {0}; // Winodow pattern map is dynamic : i.e we will add when we want to expand & remove when we want to shrink.

    int i=0; // indicate the start index of my window
    int min_len = INT_MAX;
    int start_idx = -1;  // -1 bcoz there is no gurantee that we'll find a window
    int count = 0;

    for(int j=0;j<N;j++){
        char ch = text[j];
        // expand the window
        window_freq_map[ch]++;

        // check if window is Valid or not after adding character 
        
        
        /*(see this at last when u want to know why we use WINDOW_IS_VALID)
            we will create a int count; and increment it whenever we encounter our pattern char in the window
            and if(count==M) where M = size of pattern string then stop there , we found our valid string
        */
        if (pattern_freq_map[ch] != 0){
            // ch is present in the pattern
            if(window_freq_map[ch] <= pattern_freq_map[ch]){
                count++;
            }
        }
        
        //if(WINDOW_IS_VALID){  // valid window : our window containing all the characters of pattern
            if(count == M) {            
            // if window is valid then , shrink / contract the window to remove unwanted characters and shrink until it remains valid.

            // There are two cases for unwanted character :
            // 1. If a character is not present in the pattern but present in window

            // 2. If a character is present in the pattern but is in excess in the window (i.e freq of that char is more)

            // Start shrinking from left

            char temp = text[i]; // checking ith character is valid or not

            while(pattern_freq_map[temp] == 0  || pattern_freq_map[temp] < window_freq_map[temp]){

                // start shrinking 
                window_freq_map[temp]--;
                i++;
                temp = text[i]; // shift the ith pointer and put another char in window

            
            }

            int window_len = j-i+1;
            if(window_len < min_len){
                min_len = window_len;

                start_idx = i;
            }

        }

    }

    if(start_idx != -1){
        window = text.substr(start_idx, min_len);
    }

    /* if(start_idx == -1){
        // no window found
        return window;
    }
    else{
        window = text.substr(start_idx, min_len);
        return window;
    } */
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
