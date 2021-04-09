#include<bits/stdc++.h>
using namespace std;

// check whether the binary rep of a given number is a palindrome or not

// as we know that the integer can store a value of size upto 4 Bytes
// 4 Bytes = 32 bits

// so we can store a binary rep upto 32 places

// here we solve this by finding the value of Kth Bit
// and then we use Mask: 1<<K

bool isKthBitSet(unsigned int x,unsigned int k){

    return x & (1<<k); // this is the mask


}

bool isPalindrome(unsigned int x){

    unsigned int l = sizeof(unsigned int) * 8 - 1; // it will gives us the left most position (31th position : 4 * 8 -1 = 31)
    unsigned int r = 0;

    while(l>r){
        if(isKthBitSet(x,l) != isKthBitSet(x,r)){
            return false;
        }
        l--;
        r++;
        }

        return true;
    }



int main(){

    // as we dealing with bits, so we use unsigned integer
    // unsigned = only positive , signed = pos/neg

    unsigned int x;
    cin>>x;

    if(isPalindrome(x)){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }
    // here for every number we get "No"
    // bcoz it is taking 32 bits and if we write 5 : then
    // it will check palindrome for : 000000...101 , thats why its not a palindrome

    
    return 0;
}
