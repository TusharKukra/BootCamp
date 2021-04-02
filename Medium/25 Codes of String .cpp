Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, …. z=26. Write a recursive function (return type Arraylist) to print all possible codes for the string. E.g. for “1123” possible codes are aabc, kbc, alc, aaw, kw.

Input Format
Enter a number

Constraints
None

Output Format
Display all the possible codes

Sample Input
1125
Sample Output
[aabe, aay, ale, kbe, ky]



// Code:

#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void per(char a[],int be,int en,string s[],char output[],int j){
    if(be>en){
        output[j]='\0';
        s[cnt]=output;cnt++;
        return;
    }
    // converting a single no.
    int no=int(a[be])-48+96;
    output[j]=char(no);
    per(a,be+1,en,s,output,j+1);
    //converting double less than or equal to 26;
    if(a[be]!='\0' && a[be+1]!='\0'){ //condition to check that we can take this 2 number
        char a1=int(a[be])-48;
        char a2=int(a[be+1])-48;
        int number=(a1*10)+a2;
        if(number<=26){
            number+=96;
            output[j]=char(number);
            per(a,be+2,en,s,output,j+1);
        }
    }
    return;
}
int main() {
    char a[100000];cin>>a;
    string s[100000];
    char output[100000];
    per(a,0,strlen(a)-1,s,output,0);
    cout<<"[";
    for(int i=0;i<cnt-1;i++){
        cout<<s[i]<<", ";
    }
    cout<<s[cnt-1]<<"]";
}
