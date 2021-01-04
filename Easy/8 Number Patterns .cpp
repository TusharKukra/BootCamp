///////////////////////////////////////////////////////////////////////////////////

// 1. Half Pyramid of * 

#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1;i<=rows;i++){

         for(int j=1;j<=i;j++){
             
             cout<<"*";
         }
         cout<<endl;
     }
     
	return 0;
}


//////////////////////////////////////////////////////////////////////////////////

// 2. Half Pyramid of Numbers 

#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1;i<=rows;i++){

         for(int j=1;j<=i;j++){
             
             cout<<j<<" ";
         }
         cout<<endl;
     }
     
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 3. Half Pyramid of Alphabets


#include<bits/stdc++.h>
using namespace std;
int main() {
     
     int rows;
     char alphabets = 'A';
     cout<<"Enter no. of rows: ";
     cin>>rows;

     cout<<endl;

     for(int i=1 ; i <= rows ; i++){

         for(int j=1;j<=i;j++){
             
             cout<<alphabets++<<" ";
         }


         cout<<endl;
     }
     
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 4. Inverted Half Pyramid of *

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Inverted half pyramid of *

    for(int i=rows ; i>=1 ; i--){

        for(int j=1;j<=i;j++){
            
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 5. Inverted Half Pyramid of Numbers

#include <iostream>
using namespace std;

int main()
{
    int rows,a=1;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Inverted half pyramid of Numbers

    for(int i=rows ; i>=1 ; i--){

        for(int j=1;j<=i;j++){
            
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 6. Inverted Half Pyramid of Characters

#include <iostream>
using namespace std;

int main()
{
    int rows;
    char a = 'A';

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=rows;i>=1;i--){

        for(int j=1;j<=i;j++){

            cout<<a++<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 7. Half Pyramid of Same Numbers

eg: 
1
1 2
1 2 3
1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int rows,a=1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        a=1;
        
        for(int j=1;j<=i;j++){

            cout<<a++<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 8. Half Pyramid Numbers

eg:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
	
#include <iostream>
using namespace std;

int main()
{
    int rows,a=0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        a=a+1;

        for(int j=1;j<=i;j++){

            cout<<a<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 9. Half Pyramid Fibonacci Numbers

eg:
1
1 2
1 2 3
1 2 3 5
1 2 3 5 8
	
#include <iostream>
using namespace std;

int main()
{
    int rows,a=0,b=1,c;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        a=0; b=1;

        for(int j=1;j<=i;j++){

            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }

        cout<<endl;
    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////

// 10. Half Pyramid Fibonacci Numbers

eg:
1
2 3
5 8 13
21 34 55 89

#include <iostream>
using namespace std;

int main()
{
    int rows,a=0,b=1,c;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        
    
        for(int j=1;j<=i;j++){

            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }

        cout<<endl;
    }
    
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////

// 11. Right Half Pyramid of * 

eg:

      *
    * *
  * * *
* * * *

#include<bits/stdc++.h>

using namespace std;

int main(){

    int row,a=0,b=1,c;
    cin>>row;

    int k = 2 * row - 2;
 
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < row; i++) {
 
        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < k; j++)
            cout << " ";
 
        // Decrementing k after each loop
        k = k - 2;
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        
        for (int j = 0; j <= i; j++) {
            
            // Printing stars
            cout << "* ";
        }
 
        // Ending line after each row
        cout << endl;
    }

    return 0;
}


