// Stack implementation in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
// int size = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isFull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isEmpty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isFull(s)) {
    cout << "STACK FULL";
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  // size++;
}

// Remove element from stack
void pop(st *s) {
  if (isEmpty(s)) {
    cout << "\n STACK EMPTY \n";
  } else {
    cout << "Item popped= " << s->items[s->top];
    s->top--;
  }
  // size--;
  cout << endl;
}

// Print elements of stack
// void printStack(st *s) {
//   printf("Stack: ");
//   for (int i = 0; i < (s->items); i++) {
//     cout << s->items[i] << " ";
//   }
//   cout << endl;
// }

// Driver code
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));
  cout << sizeof(s->items[0]);
  createEmptyStack(s);
  cout << sizeof(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);
  cout << sizeof(s);

  // printStack(s);

  pop(s);

  cout << "\nAfter popping out\n";
  // printStack(s);
}