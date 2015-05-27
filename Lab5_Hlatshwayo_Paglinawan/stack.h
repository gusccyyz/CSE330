#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Stack {
public:
   Stack();
   /**
      Pushes a value onto the stack.
   */
   void push(string s);

   /**
      Yields the top value on the stack.
   */
   string top() const;

   /**
      Removes a value from the stack.
   */
   void pop();

   /**
      Finds the size of the stack.
   */
   int size() const;
private:
   list<string> elements;
};

Stack::Stack(){
   
}

void Stack::push(string s){
   elements.push_front(s);
}

string Stack::top() const{
   string frst = elements.end();
   return frst; // This will set the first value in the stack to the first string 
}

void Stack::pop(){
   while (!elements.empty()){
      string del;
      *del = elements.end();
      del--;
   }
}

int Stack::size() const{
   int s = elements.size();
   return s;
}
#endif