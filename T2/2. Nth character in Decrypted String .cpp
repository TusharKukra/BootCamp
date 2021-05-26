// Statement :
Input: "a2b2c3", k = 5
Output: c
Decrypted string is "aabbccc"

Input : "ab4c2ed3", k = 9
Output : c
Decrypted string is "ababababccededed"

Input: "ab4c12ed3", k = 21
Output: e
Decrypted string is "ababababccccccccccccededed"
  

// Code :

#include<bits/stdc++.h>
using namespace std;

char encodeChar(string str, int k)
{
    string expand = ""; // expand : is used to store final string after decompressing string str
 
    string temp;  // Current substring
    int freq = 0; // Count of current substring
 
    for (int i=0; str[i]!='\0'; )
    {
        temp = ""; // Current substring
        freq = 0; // count frequency of current substring
 
        // read characters untill you find a number
        // or end of string
        while (str[i]>='a' && str[i]<='z')
        {
            // push character in temp
            temp.push_back(str[i]);
            i++;
        }
 
        // read number for how many times string temp
        // will be repeated in decompressed string
        while (str[i]>='1' && str[i]<='9')
        {
            // generating frequency of temp
            freq = freq*10 + str[i] - '0';
            i++;
        }
 
        // now append string temp into expand
        // equal to its frequency
        for (int j=1; j<=freq; j++)
            expand.append(temp);
    }
 
    // this condition is to handle the case
    // when string str is ended with alphabeds
    // not with numeric value
    if (freq==0)
        expand.append(temp);
 
    return expand[k-1];
}
 

int main(){

    string s;
    cin>>s;

    int k;
    cin>>k;

    cout<<encodeChar(s,k)<<endl;
    
    return 0;
}
