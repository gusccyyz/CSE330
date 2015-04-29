//  Ryan Paglinawan
//  Chapter 4 #25
#include <iostream>
#include <vector>

using namespace std;

int arr[ ] = {1,6,2,9,12,15,33,28};
int arrSize = sizeof(arr)/sizeof(int);

int main(){

  for (int i = 1; i < arr[]; i++){// there is an error in this code that I could not understand
    int sum = arr[i - 1] + arr[i];
    double ave = sum/arr[];
    cout << ave;
  }
  return 0;
}
