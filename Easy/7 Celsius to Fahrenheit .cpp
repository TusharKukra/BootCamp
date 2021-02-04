#include<bits/stdc++.h>
using namespace std;
int main() {
     
     float f,c;
     cout<<"Enter temperature in celsius: ";
     cin>>c;
     
     f = (9.0*c/5.0) + 32;
     
     cout<<endl<<"Temperature in Farenheit: "<<f;
     
	return 0;
}


//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//Fahrenheit to Celcius Program

int main(){

    int init, fval, step, f;
    cin>>init>>fval>>step;
    for(f=init; f<=fval ; f = f+ step){
        int c = (5/9.0)*(f-32);
        cout<<f<<" "<<c<<endl;
    }
    

    return 0;
}
