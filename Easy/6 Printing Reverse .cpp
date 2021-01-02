////////////////////////////////////////////////////////////////////////////////////////

// Method 1

#include <bits/stdc++.h>
using namespace std;

//Reverse a String Method 1 (by Swapping Characters)

void ReverseString (string& s){

        int n = s.length();
        for(int i=0;i<n/2;i++){   // here we take n/2 bcoz we have to swap characters starting from two corners

            swap(s[i],s[n-i-1]);

        }
    }

int main(){
    
        string str;
        cout<<"Enter any string: ";
        getline(cin,str);

        ReverseString(str);

        cout<<endl<<str;
    
    return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////

// Method 2 (using STL)

#include <bits/stdc++.h>
using namespace std;

//Reverse a String Method 2 (by using STL)


int main(){
    
        string str;
        cout<<"Enter any string: ";
        getline(cin,str);

        reverse(str.begin(),str.end());

        cout<<endl<<str;
    
    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////

// Method 3

#include <bits/stdc++.h>
using namespace std;

//Reverse a String Method 3 (by traversing from end)

void Reverse (string s){

        for(int i=s.length()-1 ; i>=0 ; i--){   
            
            cout<< s[i];

        }
    }

int main(){
    
        string str;
        cout<<"Enter any string: ";
        getline(cin,str);

        Reverse(str);
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////

// Method 4 

#include <bits/stdc++.h>
using namespace std;

// Function to reverse string & return reverse string pointer of that

char* reverseConstString (char const* str){

    int n = strlen(str);  // finding length of string

    char *rev = new char [n+1];    // create a dynamic pointer char array

    strcpy(rev,str);  // copying of string to ptr array

    // Now we swap characters starting from two corners

    for(int i=0 ,j=n-1 ; i<j ; j--){

        swap(rev[i],rev[j]);
    }
    return rev;

}

int main(){

    const char *s = "Programming";

    printf("%s", reverseConstString(s));

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////

// Method 5

#include <bits/stdc++.h>
using namespace std;

// Reverse a string using Constructor

int main(){

    string s;
    getline(cin,s);

    string reverse = string(s.rbegin(),s.rend());    // here we also use crbegin(), crend() both are same
    cout<<reverse;

    return 0;
}


//here in the method 5 : we have rbegin() , rend() :-  rbegin() returns a reverse iterator to the last character of the original input string, and
                                                       rend() returns a reverse iterator to the character preceding the first character of the original input string (i.e. one past the "end" of the string).
