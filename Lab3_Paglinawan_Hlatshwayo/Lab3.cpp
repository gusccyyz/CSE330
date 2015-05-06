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

	while there is more input
        if input is an operand
		else
		print input
		if input is ’(’  // ’(’ has lowest precedence in the stack, highest outside
		        push input on stack
		else if (input == ')'){//input is ’)’
		        while (!s.empty() && s.top() != '('){//stack is not empty and top of stack is not ’(’
		                cout << s.top(); 
		                pop stack
		            }
		        if (!s.empty()) {//stack is not empty
		                pop stack
		            }
		        else error  // no matching ’(’
		else if (s.empty() || prec(s.top()) < prec(input)){//stack is empty or prec(top of stack) < prec(input) // bottom of stack has lower
		                                                          // precedence than everything
		        push input on stack
		    }
		else if (prec(s.top()) >= prec(input)){//prec(top of stack) >= prec(input)
		        while (!s.empty() && prec(s.top()) >= prec(input))//stack is not empty and prec(top of stack) >= prec(input)
		                print top of stack
		                pop stack
		        push input on stack
		a + b - c     translates to
		a + b * c     translates to
		(a + 2) / (5 + d)   goes to
		a b + c -
		a b c * +
		a 2 + 5 d + /
		                else check for errors
		while (!s.empty())
		        cout << s.top() << endl;
		        s.pop();	
	return 0;
}