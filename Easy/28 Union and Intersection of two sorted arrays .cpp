#include<bits/stdc++.h>
using namespace std;
int main () {
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++)
		cin>>arr1[i];
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++)
		cin>>arr2[i];
	int i=0;
	int j=0;
	int ar1[n1+n2];
	int k=0;
	int m=0;
	int ar2[n1];
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				ar2[m]=arr1[i];
				m++;
				break;
			}
		}

	}
	// for(i=0;i<ar2;i++)
	for(i=0;i<n1;i++){
		ar1[i]=arr1[i];
	}

	j=0;
	i=0;
	while(j<max(n1,n2)){
		for(int k=j;k<n2;k++){
            //  NO NEED TO BREAK
			// if(arr2[k]==ar1[j]){
			//  break	
			// }
			if(k==n2-1){
				ar1[n1+i]=arr2[j];
				i++;
			}
        }
		j++;
	}
	int c=n1+i;
	sort(ar1,ar1+c);
	cout<<ar1[0]<<" ";
	for(j=1;j<c;j++){
		if(ar1[j]!=ar1[j-1])
			cout<<ar1[j]<<" ";
	}
	cout<<endl;
	if(m>0){
		cout<<ar2[0]<<" ";
		for(j=1;j<m;j++){
			if(ar2[j]!=ar2[j-1])
				cout<<ar2[j]<<" ";
		}
	}
	return 0;
}
