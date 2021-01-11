#include<bits/stdc++.h>
#define getArray for(int i=0;i<n;i++){cin>>a[i];}
#define printArray for(int i=0;i<n;i++){cout<<a[i];}
using namespace std;

void swap (int *a, int *b){

     int temp = *a;
     *a=*b;
     *b=temp;
}


// Selection Sort (using Array)
void Selection(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}


int main(){

     int n;
     cin>>n;
     int a[n];
     getArray;
     Selection(a,n);
     printArray;
     return 0;
}
