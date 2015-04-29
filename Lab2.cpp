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
int seqSearch(const vector<T>& v, int first, int last, const T& target){
	for (int i = 0; i < ; ++i)
	{
		/* code */
	}
}

int main(){
	vector <int> intcck(intarr);//	This will create the vector to check the int
	int intarr[] = {1, 2, 6, 7, 10, 22, 19, 33, 35};
	vector <string> strcck(strarr);//	This will create the vecctor to check the string
	string strarr[] = {"abs", "awp", "bhg", "sghsh", "het", "hetet"};
}