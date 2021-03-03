#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		char str[100000];
		cin>>str;
	
		int n=strlen(str);
	
		if(n==1)
			cout<<0<<endl;
	
		if(n%2!=0)
			n=n-1;
		int sum1,sum2;
		while(n>0){
			for(int i=0;i<=strlen(str)-n;i++){
				int j=0;
				sum1=0;
				sum2=0;
				while(j<n/2){
					sum1+=str[i+j];
					sum2+=str[i+n/2+j];
					j++;
				}
				
			
				if(sum1==sum2){
					cout<<n<<endl;
					break;
				}
				
			
			}
				if(sum1==sum2)
					break;
				n=n-2;
				if(n==0)
					cout<<0<<endl;
			
		}
		
	}
	return 0;
}
