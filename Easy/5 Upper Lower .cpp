// IsLower (Character)

#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    cin>>c;

    if(islower(c)){
        cout<<"Lowercase.";
    }

    else{
        cout<<"Uppercase.";
    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////

// IsUpper (Character)

#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    cin>>c;

    if(isupper(c)){
        cout<<"Uppercase.";
    }

    else{
        cout<<"Lowercase.";
    }
    
    return 0;
}


///////////////////////////////////////////////////////////////////////////////

//Lower to upper (String)

#include <bits/stdc++.h>
using namespace std;

int main(){

    // lowercase to uppercase in String

    char c[100];
    cout<<"Enter the String in Lowercase: ";

    cin>>c;

    for(int i=0;i<strlen(c);i++){

        if(c[i] >= 97 && c[i] <= 122) // ascii values of lowercases
        {
            c[i]-=32;    // if the entered string is in lowercase then subtract each character from 32
        }
    }

    cout<<endl;
    cout<<"The given string in Uppercase is: "<<c;

    
    
    return 0;
}



