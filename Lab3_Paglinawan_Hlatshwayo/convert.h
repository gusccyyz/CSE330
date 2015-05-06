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

using namespace std;
class Convert {
	Convert();
	prec();
	// An algorithm for infix to postfix expression conversion.
// For example,
//
//
// Valid operands are single digits and characters: 0-9 a-z A-Z
// Valid operators are: + - * / ( )
// Highest precedence:  * /
// Lowest precedence:   + -
// ( has lowest precedence on the stack and highest precedence outside of stack.
// ) never goes on stack.
// Bottom of the stack has the lowest precedence than any operator.
// Use a prec() function to compare the precedence of the operators based on the above rules.
// Note there is little error checking in the algorithm!
/*	while there is more input
        if input is an operand
else
print input
if input is ’(’  // ’(’ has lowest precedence in the stack, highest outside
        push input on stack
else if input is ’)’
        while stack is not empty and top of stack is not ’(’
                print top of stack
                pop stack
        if stack is not empty
                pop stack
        else error  // no matching ’(’
else if stack is empty or prec(top of stack) < prec(input) // bottom of stack has lower
                                                          // precedence than everything
        push input on stack
else if prec(top of stack) >= prec(input)
        while stack is not empty and prec(top of stack) >= prec(input)
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
while stack is not empty
        print top of stack
        pop stack	*/
};
#endif