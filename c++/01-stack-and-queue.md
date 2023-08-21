#Stack / Ngăn xếp
## Stack used LIFO method
Hãy tưởng tượng ta có 1 chồng sách (hoặc dĩa/chén) được bỏ trong 1 cái xô.
Thì mình có thể bỏ thêm 1 phần vào (push), hoặc lấy 1 phần tủ ra (pop).
Và muốn lấy phần tử đâu tiên ra, thì phải lấy hết các phần tử trước đó ra.
Phần tử vùa thêm vào là phần tử được lấy ra trước nhất (last in - first out)

Về cơ bản, Stack sẽ bao gồm 1 array và 1 con trỏ. Ta tạo ra cấu trúc mới và thêm cho nó các methods (hàm) để mô phỏng cơ chế Last In - First Out (LIFO), y như cách 1 chồng sách (hoặc 1 chồng chén/dĩa hoạt động), và ta gọi tên cấu trúc dữ liệu đó là Stack. 

Thật ra, "Standard Liabrary" trong C++, đã cung cấp cho ta sẵn cấu trúc stack, chỉ việc khai báo và dùng. Còn cách tự implement thì để mình hiểu bên dưới nó hoạt động thế nào thôi (như thay vì lao vào học kiểu stack thì sẽ hơi trừu tượng, mình build cái structure của stack để nẵm vũng nó). Xem file 01-stack.cpp để hiểu cách implement stack như thế nào (đừng quên đọc nốt những phần còn lại phí dưới nhá)

Stack is a linear data structure that follows the principle of **Last In First Out** (LIFO).
This means the last element inserted to the stack is removed first (if you want to take 1 out).

Several of the C++ Standard Library (STL) container types have push_back and pop_back operations with LIFO semantics like std::stack, std::list.

Actions we can do in Stack:
* insert and element: push
* remove an element: pop

See this image from [programiz site](https://www.programiz.com/dsa/stack)
![stack](https://cdn.programiz.com/sites/tutorial2program/files/stack.png how stack works)

## Pointer in Stack
* There is a TOP pointer to always point to the top element / Con trỏ luôn chỉ vào phần tử trên cùng trong stack.
* TOP = -1: the stack is empty.
* When a new element is pushed, TOP's value is increased by 1, and it points to the position of new element.
* In reverse, when popping an element, TOP pointer will point the second to last element, and TOP value deceased by 1.
* Check if stack is empty or full before popping or pushing.

## Basic operations of Stack
* Push: Add an element to the top of a stack
* Pop: Remove an element from the top of a stack
* IsEmpty: Check if the stack is empty
* IsFull: Check if the stack is full
* Peek: Get the value of the top element without removing it

#Queue / Hàng đợi
## Queue uses FIFO method
Ngược lại với Stack, thì tưởng tượng queue như đúng cái tên của nó. Ai vào trước được xử lý trước. Simple!

## Pointer in Queue

# References
- https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm
- https://www.programiz.com/dsa/stack
- https://www.techiedelight.com/stack-implementation-in-cpp/
- https://www.geeksforgeeks.org/stack-empty-and-stack-size-in-c-stl/
- How to traverse a stack in C++: https://www.techiedelight.com/traverse-a-stack-in-cpp/
- 
