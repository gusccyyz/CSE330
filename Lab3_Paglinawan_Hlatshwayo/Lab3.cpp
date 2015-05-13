// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s): Mbusi Hlatshwayo Ryan Paglinawan
// Lab 3
// Title:: Infix to postfix expression converstion
#ifndef CONVERT_CLASS
#define CONVERT_CLASS

#include <stack>
#include <string>
#include <iostream>
#include "convert.h"

using namespace std;

int main() {
	stack <string> s;
	string equation;

	cout << "Input equation: " << endl; 
	getline(cin, equation);

	while (cin.good())
        if ('*' || '/' || '+' || '-') {
        	cout << input;
        }
    	else {
    		if (input == '(') {//has lowest precedence in the stack, highest outside
			        push input on stack
			    }
			else if (input == ')'){//input is ’)’
			        while (!s.empty() && s.top() != '('){//stack is not empty and top of stack is not ’(’
			                cout << s.top(); 
			                s.pop();
			            }
			        if (!s.empty()) {
			                s.pop();
			            }
			        else cerr << "No matching ’(’\n";
			    }
			else if (s.empty() || Convert::prec(s.top()) < Convert::prec(input)){	//stack is empty or prec(top of stack) < prec(input) // bottom of stack has lower precedence than everything
			        push input on stack
			    }
			else if (Convert::prec(s.top()) >= Convert::prec(input)){	//prec(top of stack) >= prec(input)
			        while (!s.empty() && Convert::prec(s.top()) >= Convert::prec(input)){

			        }	//stack is not empty and prec(top of stack) >= prec(input)
			    }
    	}
		while (!s.empty()) {
			cout << s.top() << endl;
		    s.pop();	
		}
	return 0;
}