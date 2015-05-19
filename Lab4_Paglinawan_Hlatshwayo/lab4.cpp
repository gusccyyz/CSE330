// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s):Mbusi Hlatshwayo, Ryan Paglinawan
// Lab 4
//Title: Time complexity

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int selection(vector<int> x);

int bubble(vector<int> x);

int insertion(vector<int> x);

int main(){
	int n;

	cout << "Something for the user: \n";
	cin >> n;

	vector<int> x(n);

	selection(x);
	bubble(x);
	insertion(x);
	
	return 0;
}

int selection(vector<int> x){//selection sort
	int i;
	int j;
	for (i = 0; i < n-1; i++){
	    for (j = i+1; j < n; j++){
	        if (v[i] > v[j]){
	            swap(v[i], v[j]);
	        }
	    }
	}
	//This should spit out the time that it takes to finish this operation
}
int bubble(vector<int> x){//bubble sort
	int i;
	int j;
	for (i = n-1; i > 0; i--){
	    for (j = 0; j < i; j++){
	        if (v[j] > v[j+1]){
	            swap(v[j], v[j+1]);
	        }
	    }
	}
	//This should spit out the time that it takes to finish this operation
}
int insertion(vector<int> x){//insertion sort
	int i;
	int j;
	for (i = 1; i < n; i++){
	    for (elem = v[i], j = i-1; j >=0 and elem < v[j]; j--){
	        v[j+1] = v[j];
	    }
	    v[j+1] = elem;
	}
	//This should spit out the time that it takes to finish this operation
}