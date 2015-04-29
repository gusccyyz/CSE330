// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s): Mbusi Hlatshwayo Ryan Paglinawan
// Lab 1
// Title: time 12
#include "time12.h"
#include "d_time24.h"
#include <iostream>
#include <iomanip>

#include "d_except.h"

using namespace std;

enum timeUnit {AM, PM};

time12::time12(hou,min,tunit):time24(hou,min){
	this -> hours = hou;
	this -> minutes = min;
	//this -> seconds = 0;
}
void time12::addTime(int m) : time24::addTime(m){
	return "Adding time to clock"; 
}
void time12::readTime(){
	char colonSeparator;

   cin >> hour >> colonSeparator >> minute;
   // make sure hour and minute are in range
   time24::normalizeTime();
	cout << hour << " : " << minute << endl;
}
void time12::writeTime(){
	// the implementation uses stream handling functions
	// not discussed in the book. consult your compiler
	// help system for details

   // save current format flags and fill character
   long currentFlags = cout.flags();
   char currentFill = cout.fill();

   // set fill char to ' ' and enable right justification
   cout.fill(' ');
   cout.setf(ios::right,ios::adjustfield);

   // output the hour
   cout << setw(2) << hour << ':';

   // set fill char to '0' and output the minute
   cout.fill('0');
   cout << setw(2) << minute << "  ";

   cout.fill(currentFill);
   cout.setf(currentFlags);
}
time24 time12::convert(int hou, int min, timeUnit tunit){
	if (tUnit) {
		hou += 12;
		time24(hou,min);
	}
	else {
		time24(hou,min);
	}
}