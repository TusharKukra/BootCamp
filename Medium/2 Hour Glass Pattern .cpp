#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{

		for(int j=0;j<=i-1;j++)
		{
			cout<<"  ";

		}
		int cnt=n-i;
		for(int j=0;j<=n-i;j++)
        {
            cout<<cnt<<" ";
            cnt--;
        }
        cnt=cnt+2;
        for(int j=0;j<=(n-1)-i;j++)
        {

            cout<<cnt<<" ";
            cnt++;

        }
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{

		for(int j=0;j<=i-1;j++)
		{
			cout<<"  ";

		}
		int cnt=n-i;
		for(int j=0;j<=n-i;j++)
        {
            cout<<cnt<<" ";
            cnt--;
        }
        cnt=cnt+2;
        for(int j=0;j<=(n-1)-i;j++)
        {

            cout<<cnt<<" ";
            cnt++;

        }
		cout<<endl;
	}

	return 0;
}
