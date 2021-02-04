#include<iostream>
using namespace std;

//Constants

int main(){

    const int area = 2000;

    area = 2000+15;

    cout<<area;
    //it gives error bcoz constant dont change their value
    // and also WE MUST INITIALIZE or enter a value in the const bucket 
    //eg: const float pi; (gives error)
    // const float pi = 3.14 (runs perfectly)

    return 0;
}
