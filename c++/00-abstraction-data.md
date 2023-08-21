# Data types / Primitive data type / Các kiểu dữ liệu nguyên thủy
Được định nghĩa sẵn trong ngôn ngữ mình dùng.
Primitive data types provide us:
1. Definition the domain of values (data type này là lọa gì)
2. What operations is available (Có những toán tử / hành động nào mình có thể làm trên kiểu dữ liệu đó)
vd:
- int:
    - domain of values: các số nguyên giới hạn trong 4bytes
    - Operations: + - x / %, và phép tính trên bits (bitwise operations)

- float:
    - domain of values: các số thực (real, floating numbers) trong giới hạn ....
    - operations:+ - x / (nhưng KHÔNG có % và bitwise)

# User-defined data types:
Là các kiểu dữ liệu do chúng ta, mỗi người tự định nghĩa thêm.
Được khai báo qua các keywords: *struct*, *union*, *enumeration*

vd1: định nghĩa kiểu dữ liệu point
<pre><code>
struct point {
    int x;
    int y;
};
</code></pre>

Sử dụng:
<pre><code>
point pt;
pt.x = 1;
pt.y = 2;
</code></pre>

vd2: định nghĩa kiểu dữ liệu mới tên "students":
<pre><code>
struct {
    string name;
    flost gpa;
}

sử dụng:
<pre><code>
students s1;
s1.name = "Tom";
s1.gpa = 3.9;
</code></pre>

students schoolYear2003[100];
schoolYear2003[0].name = "Anne";
schoolYear2003[0].gpa = 4.0;

Ref: https://www.youtube.com/watch?v=TMtcnfepsuw


# Abstract data types / ADT / Các kiểu dữ liệu trừu tượng
ADT được định nghĩa từ những data types nguyên thủy (primitive data types). Cũng cung cấp cho chúng ta các **operation** (methods) thông qua *funtions* nhưng chẳng cho biết là nó chạy bên trong làm sao. Chỉ cần biết có hàm gì, đưa input vào thì nó trả ra output, thế thôi!

Các kiểu dữ liệu trừu tượng (ADT) phổ biến:
- stack
- queue
- hash
- map
- tree

**class** trong OOP (object-oriented programming / lập trình hướng đối tượng) là ADT. Nói cách khác, ADT thường đc implment bằng 1 class trong C++ hay Java hay các ngôn ngữ hỗ trợ OOP.
Xem thêm "Intro to CLASSES" của LinkedIn Learning: https://www.youtube.com/watch?v=eiugg-Nb40A&list=PL26pr4T7OzVMuuHYqoLU2eaKsuma9GUuN&index=6


vd: kiểu stack
<pre><code>
stack myStack;
myStack.push("Apple");
myStack.push("Banana");
myStack.pop();
</code></pre>

ADT như 1 blackbox, nó giấu hết bên dưới được implement thế nào, dùng cấu trúc gì, details các functions (push, pop trong stack) nó ra sao.