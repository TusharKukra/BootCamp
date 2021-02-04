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


////////////////////////////////////////////////////////////////////////////////////////////////////

// Lower to upper and upper to lowercase 

#include <bits/stdc++.h>
using namespace std;



    void toggleStringCase(string& s){

        int length = s.length();
        for(int i=0;i<length;i++){
            
            int c = s[i];

            if(islower(c)){
                s[i] = toupper(c);  // this means if our character is in lowercase then convert it into Uppercase
            }

            else if (isupper(c)){
                s[i] = tolower(c);  // this means if our character is in uppercase then convert it into lowercase
            }
        
        }
    }
    
    
    int main(){

        string s ;
        
        getline(cin,s);

        toggleStringCase(s);

        cout<<s;

    
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//Toggle Case in Character

int main(){

    char ch;
    cin>>ch;

    //using ascii codes

    int a = ch;
    cout<<ch<<" "<<a<<endl;

    //To convert or toggle cases

    if(a >= 97 && a <= 122){
        //for smaller characters
        ch = a-32;
        cout<<"Uppercase : "<<ch<<endl;
    }

    else{

        // for Capital Characters
        ch = a + 32;
        cout<<"Lowercase : "<<ch<<endl;
    }

    return 0;
}
