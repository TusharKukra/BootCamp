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

// kth character of decrypted string

char encodedChar(string str, int n){

    string expand =""; // create a variable to store the final string after decompressing str

    string temp; // current substring
    int freq = 0; // count of current substring

    for(int i=0; str[i] != '\0';){  // read characters till end of the string

        temp = ""; // current substring
        freq = 0;

        // For String : read character untill u find a number or end of string
        while(str[i] >= 'a' && str[i]<='z'){
        
            // push the character into temp substring
            temp.push_back(str[i]);
            i++;

        }

        // For Numbers : read number for how many times string temp will be repeated in decompressed string
        while(str[i] >= '1' && str[i] <= '9'){

            // generating frequency of temp 
            freq = freq * 10 + str[i] - '0';
            i++;
        }

        // now append string temp into expand equals to its frequency
        for(int j=1;j<=freq;j++){
            expand.append(temp);
        }

    }

    // this condition is to handle the case : when string str is ended with alphabets (not with the characters)
        if(freq==0){
            expand.append(temp);
        }


    return expand[n-1];

}



int main(){

    string str;
    cin>>str;

    int n;
    cin>>n;

    cout<<encodedChar(str,n)<<endl;

    return 0;
}


// Code : 2

#include<bits/stdc++.h>
using namespace std;

// kth character of decrypted string

char* characterAt(char* input1, int input2){

    char ch[100];
    char *c;
    char freq[1];

    ch[0] = input1[0];

    int j = 1, i=1, l;

    for(;;){
        if(input1[i] == '\0'){  // if string is empty
            break;
        }

        if(input1[i] != 49){
            if(input1[i] >= 50 && input1[i] <= 57){

                l = input1[i] - 48;

                for(int k = 1; k<l ;k++){
                    ch[j] = input1[i-1];
                    j++;
                }
            }

            else{
                ch[j] = input1[i];
                j++;
            }

            i++;
            continue;
        }
        i++;
    }

    ch[j] = '\0';
    if(input2 > j){
        return "-1";
    }

    freq[0] = ch[input2 -1];
    freq[1] = '\0';
    c = freq;

    return strdup(c);
}
