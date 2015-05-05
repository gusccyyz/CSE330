/*
	Lab 2
	Mbusi Hlatshwayo, Ryan Paglinawan

	This is problem 12, p.212, chapter 4.


Implement a vector vector version of the sequential serach algorithm:

int seqSearch(const vector<T>& v, int first, int last, const T& target):

You will have to test the function with both integers and strings that will be given below.

Due: in a week, beginning of lab, both on Blackboard and hard copy.

Please use same headers and naming conventions from Lab 1.

Test:

(a) Initialize vector to:

1, 2, 6, 7, 10, 22, 19, 33, 35

Search whole vector for 10.  Return index.

Search range from 1 to 6 for 35.  Return index if found or -1 if not found.

(b) Initialize vector to {"abs", "awp", "bhg", "sghsh", "het", "hetet"}

Search for "het" in the whole vector.  Return index.

Search for "abc" in range 1 to 4.  Return index if found or return  -1 if not found.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
int seqSearch(const vector<T> v, int first, int last, const T& target, int range){
	//int range in this respect is going to be the range that the system will search for the value
	//vector <T> :: const_iteration iter;
	bool check = false;
	int index;
	for (int i = 0; i < v.size(); i++) {
		if (!check) {
			if (target == v[i]) {
				check = true;
				index = i;
			}
			else {
				cout << "-1" << endl;
			}
		}
		if (check) {
			cout << target << " found at index " << index << ". "<< endl;
			break;
		 }
	}
	return 0;
}

int main(){
	int intarr[] = {1, 2, 6, 7, 10, 22, 19, 33, 35};
	vector <int> intcck(intarr, intarr + 9);//	This will create the vector to check the int

	string strarr[] = {"abs", "awp", "bhg", "sghsh", "het", "hetet"};
	vector <string> strcck(strarr, strarr + 6);//	This will create the vecctor to check the string

	//seqSearch(intcck, intcck.begin(), intcck.end(), 10);

	string x = "het";
	string y = "abc";

	seqSearch(intcck, 0, 8, 10, 8);

	seqSearch(intcck, 0, 8, 35, 6);

	cout << "Searching for " << x << endl;
	seqSearch(strcck, 0, 5, x, 7);

	cout << "Searching for " << y << endl;
	seqSearch(strcck, 0, 5, y, 5);
}