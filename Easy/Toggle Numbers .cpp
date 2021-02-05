1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


#include <iostream>
using namespace std;
int main() {

//Toggle Number Program

int n;
cin>>n;

int number;
cin>>n;

for(int row=1;row<=n;row++){

    if(row%2==0){  // if row is even then print 0
        number = 0; 
    }
    else{
        number = 1;  // if row is odd then print 1
    }

    for(int col=1;col<=row;col++){
        cout<<number<<" ";  // first print number according to the row 
        number = 1-number;  // then toggle 1-1 = 0
    }
    cout<<endl;
}

return 0;
}
