#include <iostream>       // std::cout
#include <stack>          // std::stack, std::swap(stack)
using namespace std ;
int main ()
{
    stack<int> stack1,stack2;
 
    stack1.push (1);
    stack1.push(3);
    stack1.push(5); // size of stack1 is 3
 
    stack2.push (2);
    stack2.push(4); // size of stack2 is 2
 
    // exchange 2 stacks
    swap(stack1,stack2);
 
  cout << "size of stack1: " << stack1.size() << '\n';
  cout << "size of stack2: " << stack2.size() << '\n';
 
  return 0 ;
}
