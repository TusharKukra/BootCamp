Google Tower of Hanoi.

Using a helper stick (peg), shift all rings from peg A to peg B using peg C. All rings are initally placed in ascending order, smallest being on top.

No bigger ring can be placed over a smaller ring.

a. Write a recursive function which prints the steps required to solve the tower of Hanoi problem for N discs.

b. Write a recursive function which returns number of steps required to solve the tower of Hanoi problem for N discs.

Let T1 be the Source Tower, T2 be the Destination Tower and T3 be the Auxillary Tower.

Input Format
Enter the number of discs

Constraints
None

Output Format
Display the steps required to solve the tower and also print the total number of steps required

Sample Input
2
Sample Output
Move 1th disc from T1 to T3
Move 2th disc from T1 to T2
Move 1th disc from T3 to T2
3



// Code :

#include<iostream>
using namespace std;

int countMoves(int n) {

    if (n == 0) return 0;

    // count(n-1) + 1 + count(n-1)
    return 2 * countMoves(n - 1) + 1;
}

void TOH(int n,char src, char dest, char helper){
  
    if(n==1){
        cout<<"Move 1th disc from "<<"T"<< src<<" to "<<"T"<<dest<<endl;
        return;
    
    }
  
 
    TOH(n-1,src,helper,dest);
    cout<<"Move"<<" "<<n<<"th"<<" disc "<< "from "<<"T"<< src << " to "<<"T"<< dest<<endl; 
    TOH(n-1,helper,dest,src);


}

int main(){
     int n;
     cin>>n;
     
    TOH(n,'1','2','3');
    cout<<countMoves(n);
   
    return 0;
}
