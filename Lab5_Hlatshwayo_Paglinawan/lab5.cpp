// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s):Mbusi Hlatshwayo, Ryan Paglinawan
// Lab 5
//Title: Time complexity
/*
	Due: Wed. May 27 for bothe sections. (Monday 5/25 is Memorial Day, a Holiday)

	Implement a Stack class, completing the attached template (file: "Stack_templ.cpp"), using a linked list of strings.

	Supply operations size, push, pop, and top, just like in the standard stack template.

	For testing (and to turn in): push "John", "Jane", "Wen"; then pop the stack 2 times, printing the top in each case. Then push "Audrey", "Alice", "Teresa"; then pop two times, printing the top in each time.

	Print the size of the stack. Print the contents of the stack, popping until empty.

	Header for the code (standard for all labs, with appropriate adjustments of course like for the lab title,etc.):
*/

#include <iostream> // cout
#include "stack.h" // stack
#include <string>

int main() {
    Stack::stack<std::string> name_stack; 

    // push some names onto the stack
    name_stack.push("John");
    name_stack.push("Jane");
    name_stack.push("Wen");
    
    // remove the top two elements, printing the top of the stack each time
    name_stack.pop();
    std::cout << name_stack.top() << std::endl;
    name_stack.pop();
    std::cout << name_stack.top() << std::endl;	

    // push some names onto the stack
    name_stack.push("Audrey");
    name_stack.push("Alice");
    name_stack.push("Teresa");  
    
    // remove the top two elements, printing the top of the stack each time
    name_stack.pop();
    std::cout << name_stack.top() << std::endl;
    name_stack.pop();
    std::cout << name_stack.top() << std::endl;	
    
    // print the current size of the stack
    std::cout << "The size of the stack is: " << name_stack.size() << std::endl;

    // print the top element of the stack, pop until empty stack
    
    while (!name_stack.empty()) {
        std::cout << name_stack.top() << std::endl;
        name_stack.pop();
    }

    return 0; // success
}