// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s):Mbusi Hlatshwayo, Ryan Paglinawan
// Lab 7
//Title: sieve

#include <set>
#include <iostream>
#include <iomanip>

using namespace std;

void sieve(set<int>& s, int n){
	int m, i;

	s.erase(s.begin(), s.end());

	for (m = 2; m < n; m++){
		s.insert(m);
	}
	for (m = 2; m * m <= n; m++){
		if (s.find(m) != s.end()) {
			i = 2 * m;
			while( i <= n){
				s.erase(i);
				i += m;
			}
		}
	}
}
int main(){

	set <int> listSet;
	set <int>::iterator it;

	int primeLimit, count = 0;

	// use sieve to remove non prime numbers
	sieve(listSet, 1000);

	it = listSet.begin();

	while (it != listSet.end()) {

		count++;
		cout << "     " << *it;
		if (count % 10 == 0)
			cout << endl;
		it++;
	} 
	cout << endl;

	return 0;
}