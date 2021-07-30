#include <iostream>
using namespace std;

int main(){

    float p,r,t,si;

    cout<<"Enter Principle: ";
    cin>>p;

    cout<<endl<<"Enter Rate: ";
    cin>>r;

    cout<<endl<<"Enter Time: ";
    cin>>t;

    si = (p*r*t)/100.0;

    cout<<endl<<"Simple Interest: "<<si;

    return 0;
}
