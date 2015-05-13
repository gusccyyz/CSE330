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
Convert::Convert(){

}
Convert::prec(input){// I forgot what I was going to do with this actually I honestly forgot what I was going to do with this whole lab
	
}
Convert::addWeight(input){// This is going to check and add the weight to the operands/ input
	switch (input) {
		case '*':
			weight = 4;
			break;
		case '/':
			weight = 4;
			break;
		case '+':
			weight = 3;
			break;
		case '-':
			weight = 3;
			break;
		case '(':
			weight = 2;
			break;
		case ')':
			weight = 2;
			break;
		default:
			weight = 1;
			break;
	}
}
