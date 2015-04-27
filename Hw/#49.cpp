//Ryan Paglinawan
//Chapter 3 #49
#include <iostream>

using namespace std;

int sumDigits(int n);

int main(){
  int t;
  cout << "Give me a number.\n";
  cin >> t;

  sumDigits(t);

}

int sumDigits(int n){
  if (n/10 == 0) {
    cout << n << endl;
  }
  if (n/10 != 0) {
    int l = sumDigits((n/10)) + n % 10;
    cout << l << endl;
  }
}
