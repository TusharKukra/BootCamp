// how much litres of water will be stored in between the buildings


#include<iostream>
using namespace std;
int main() 
{
    
	int n;
	cin>>n;
	int b[n],lmax[n],rmax[n],min[n];


	for(int i=0; i<n; i++)
	{
		cin>>b[i];

	}	
	
	lmax[0]=b[0];


  
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],b[i]);


	

	rmax[n-1]=b[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],b[i]);


    for(int i=0; i<n; i++)
    {
        if(lmax[i]<rmax[i])
        {
            min[i]=lmax[i];
        }
        else
        {
            min[i]=rmax[i];
        }
    }
    int water=0;
    for(int i=0; i<n; i++)
    {
       
        water=water+min[i]-b[i];
    }
    cout<<water;

	return 0;
}
