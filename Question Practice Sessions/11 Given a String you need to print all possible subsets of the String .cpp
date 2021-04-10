#include<bits/stdc++.h>
using namespace std;


void generateSubset (char* inp, char* out, int i, int j){

    // i am standing at the ith character of the input array and I have to make a decision
    

    // Decision : Whether , Add the ith Character to the subset [out]
    out[j] = inp[i];
    generateSubset(inp , out, i+1, j+1); // recursion 
    
    
    // Or Donot add the ith character to the subset [out]
    generateSubset(inp , out, i+1, j); // move 1 step ahead in input array if u dont want to add and stays at the jth place in output array

    return;

}

int main(){

   char inp[10];
   cin>>inp;

    char out[10];

   generateSubset(inp,out, 0, 0); // here 3rd parameter is the position where im standing (0th index of input array) and 4th parameter is the 0th index of Output array.


    return 0;
}
