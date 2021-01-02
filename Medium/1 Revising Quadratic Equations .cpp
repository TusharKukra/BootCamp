#include<bits/stdc++.h>

using namespace std;

int main() {
    signed long int a;
    signed long int b;
    signed long int c;
    cin>>a;
    cin>>b;
    cin>>c;
    int d=(b*b-4*a*c);
    if(d>0)
    {
        signed int x=(-b+pow(d,0.5))/2*a;
        signed int y=(-b-pow(d,0.5))/2*a;
        cout<<"Real and Distinct"<<endl;
        cout<<x<<" "<<y;    
    }
    else if(d==0)
    {
        signed int x=(-b)/2*a;
        cout<<"Real and Equal"<<endl;
        cout<<x<<" "<<x;    
    }
    else 
    {
        cout<<"Imaginary"<<endl;    
    }

	return 0;
}
