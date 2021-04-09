// Method -1 (using Logarithm)

#include<bits/stdc++.h>
using namespace std;

// Program to check Whether a number is a power of 3 or not
// we solve this using Logarithm

// here we take log (base:3) x = p , then P will be an integer
// if p is not an integer then the number is not a power of 3 .
// using header <cmath>

// in cpp log x = log (base : e) x , so for log(base:3) x we have to do is
// log(x)/log(3)

int main(){

    int x;
    cin>>x;

    float floatLog = log(x) / log(3);

    if(floatLog == int(floatLog)){  // here we are checking whether our float number is equal to the integer value (explicit typecasting)
        cout<<x<<" is a power of 3"<<endl;
    }
    else{
        cout<<x<<" is not a power of 3"<<endl;
    }


    return 0;
}
