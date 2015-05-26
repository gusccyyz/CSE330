#include <iostream>
#include <list>
#include <string>

using namespace std;

class Stack {
public:
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

void Stack::push(string s)
{
   elements.push_front(s);
}

string top(){
   string top -> elements[0];
}

void pop(){
   while (!elements.empty()){
      string lst; // This is going to be set to the last string in the list
      elements.end();
   }
}

int size(){
   while (!elements.empty()){
      return elements.size();
   }
}
