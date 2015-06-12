/*
Due date:  Monday June, 15, 2015 12noon, or Wednesday June 17, 2015 before lab begins.

(Please note the the deadlines above are for both electronic copy and hard copy;  I modified it from what what I mentioned in class.)

1.  Insert the following numbers in a multiset: 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9, 10.
  Using a loop, delete from the myltiset the repeated elements.  Print the contents of the multiset.

2. Insert the above numbers in map<string, int>, e.g. for the first number use the pair ("3",3), etc.

Using a loop, delete repeated elecments.  Print contents of the map.


3.  As usual, upload the zip file with code, including header, and also turnin hard copy.
*/

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
	multiset <int> myMuSet;
	multiset <int>::iterator it, _it;
	int x = 3;
	for (int i = 0; i < 12; i++) {
		it = myMuSet.begin();
		_it = myMuSet.begin();
		++_it;
		if (x <= 10) {
				myMuSet.insert(x);
			if (x == 4 || x == 5 || x == 6 || x == 9) {
				myMuSet.insert(x);
			}
			x++;
		}
	}
	for (it = myMuSet.begin(); it != myMuSet.end(); ++it) {
		_it = it;
		++_it;
		if (*it == *_it) {
			myMuSet.erase(_it);
		}
		++_it;
	}
	return 0;
}