Example :

1******
12*****
123****
1234***
12345**
123456*
1234567


Code : 

#include<iostream>

using namespace std;

int main()
{
     int n,i,j;
     cin>>n;

     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
               cout<<j;
          for(;j<=n;j++)
               cout<<"*";
          cout<<"\n";
     }
     
     return 0;
}
