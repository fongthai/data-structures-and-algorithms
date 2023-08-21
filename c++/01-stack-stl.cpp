/*
Using stack from Standard Template Library
The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 
 */

#include <iostream>
#include <stack>
// using namespace std;

int main(){
    std::stack<std::string> myStack;
    myStack.push("Apple");
    myStack.push("Banana");
    std::cout << myStack.top() <<std::endl;

    std::cout << myStack.size() <<std::endl;
    myStack.pop();

    std::cout << myStack.top() <<std::endl;
    std::cout << myStack.size() <<std::endl;
    

    return 0;
}