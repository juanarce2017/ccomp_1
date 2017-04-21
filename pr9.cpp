#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  int input;
  cout << "Enter length of desired array." << "\n";
  cin >> input;
  cout << "\n";

  int A [input];

  //Populate and print the Array.
  for(int i=0; i<input; i++){
    A[i] = rand()%99-1;
    cout << A[i] << " ";
  }

  cout << "\n";

  //Insertion sort.
  for(int j=2; j<input; j++){ //Iterate through the Array.
    int key = A[j]; //Store the current element into key.
    int i = j-1; //Iterator for while loop.
    while(i>0 && A[i]>key){ //Loop to insert A[j] into the sorted sequence.
      A[i+1] = A[i]; //Move the element.
      i=i-1; //New value of i.
      A[i+1] = key; //Update the key
    }
  }

  for(int i=0; i<input; i++){
    cout << A[i] << " ";
  }
  return 0;
}
