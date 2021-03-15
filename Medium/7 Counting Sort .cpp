#include <bits/stdc++.h>
using namespace std;
int amax(int a[],int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>m) m=a[i];
    }return m;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int M=amax(a,n);

    //initialise all elements by 0
    int freq[M+1]={0};
    //this loop should run till n and not M as M is maximum element of array and can be out of range
    for(int i=0;i<n;i++) freq[a[i]]+=1;
    for(int i=0;i<=M;i++){
        while(freq[i]!=0){
            cout<<i<<" ";
            freq[i]--;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Method -2
#include<iostream>
#include<climits>
using namespace std;
int main(){

	int n,i,maxi=INT_MIN;
	cin>>n;
	int a[1000000];
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>maxi){
			maxi=a[i];

		}

	}
	// int freq[maxi+1];
 	// dma
 	int *freq=new int[maxi+1]; //valid


 	for ( i = 0; i <=maxi; ++i)
 	{
 		freq[i]=0;
 		/* code */
 	}

 	for(i=0;i<n;i++){
 		freq[a[i]]++;
 	}

 	for(i=0;i<=maxi;i++){
 		while(freq[i]!=0){
 			cout<<i<<" ";
 			freq[i]--;
 		}
 	}
 	cout<<endl;
	return 0;
}
