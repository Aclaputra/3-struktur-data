#include <iostream>
using namespace std;

int x = 2;
int y = 5;

// Assignment operators
void resultAO(int x, int y) {
    cout << "Result/hasil: x = " << x << ", y = " << y << "\n";
}
void message(string operatorku) {
    cout << "operator: " << operatorku << "\n";
}
void assignmentOperators(int x, int y) {
    x += y;
    message("x += y");
    resultAO(x, y);
    x -= y;
    message("x -= y");
    resultAO(x, y);
    x *= y;
    message("x *= y");
    resultAO(x, y);
    y += x;
    message("y += x");
    resultAO(x, y);
    y -= x;
    message("y -= x");
    resultAO(x, y);
    y *= x;
    message("x *= x");
    resultAO(x, y);
}
// Aritmatika Operators
void arithmaticOperators(int x, int y) {
    int a = x + y;
    message("x + y");
    cout << "Result/hasil: "<< a << "\n";
    int b = x * y;
    message("x * y");
    cout << "Result/hasil: "<< b << "\n";
    int c = x % y;
    message("x % y");
    cout << "Result/hasil: "<< c << "\n";
}
// Operator  Peningkatan dan Penurunan (Increment and Decrement Operators)
void increment(int x, int y) {
    x++;
    message("x++");
    cout << "Result/hasil: " << x << "\n";
    y++;
    message("y++");
    cout << "Result/hasil: " << y << "\n";
}
void decrement(int x, int y) {
    x--;
    message("x--");
    cout << "Result/hasil: " << x << "\n";
    y--;
    message("y--");
    cout << "Result/hasil: " << y << "\n";
}
// Operator  Bitwise  (Bitwise Operators)
void bitwise(int x, int y) {
    int a = x & y;
    message("x & y");
    cout << "Result/hasil: " << a << "\n";

    int b = x | y;
    message("x | y");
    cout << "Result/hasil: " << b << "\n";

    int c = ~x;
    message("~x");
    cout << "Result/hasil: " << c << "\n";
}
// Operator  Hubungan  (Relational Operators)
void relational(int x, int y) {
    bool a = x > y;
    message("x > y");
    cout << "Result/hasil: " << a << "\n";
    bool b = x < y;
    message("x < y");
    cout << "Result/hasil: " << b << "\n";
    bool c = x <= y;
    message("x <= y");
    cout << "Result/hasil: " << c << "\n";
}
// Operator  Logika  (Logical Operators)
void logical(int x, int y) {
    bool a = x > y && y < x;
    message("x > y && y < x");
    cout << "Result/hasil: " << a << "\n";
    bool b = x < y && y > x;
    message("x < y && y > x");
    cout << "Result/hasil: " << b << "\n";
    bool c = x <= y && y >= x;
    message("x <= y && y >= x");
    cout << "Result/hasil: " << c << "\n";
}
// Operator  Alamat  (Address Operators)
void address(int x, int y) {
    int *a;
    a = &x;
    message("&x");
    cout << "Result/hasil: " << a << "\n";
    int *b;
    b = &y;
    message("&y");
    cout << "Result/hasil: " << b << "\n";
}
// Operator  Koma  (Comma Operators)
void comma(int x, int y) {
    x = 3, 4, 5;
    message("x = 3, 4, 5;");
    cout << "Result/hasil: " << x << "\n";
}
// Operator  Gabungan
void gabungan(int x, int y) {
    int a = x %= y;
    message("x %= y");
    cout << "Result/hasil: " << a << "\n";
    int b = x <<= y;
    message("x <<= y");
    cout << "Result/hasil: " << b << "\n";
}
// Buatlah program untuk menghitung berada di alamat berapakah mulainya nilai data A yang ke-X disimpan.
void addressFinder(int xx, int yy) {
    int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X;
    int *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q,*r,*s,*t,*u,*v,*w,*x;
    a = &A,b = &B,c = &C,d = &D,e = &E,f = &F,g = &G,h = &H,i = &I,j = &J,k = &K,l = &L,m = &M,n = &N,
    o = &O,p = &P,q = &Q,r = &R,s = &S,t = &T,u = &U,v = &V,w = &W,x = &X;

    cout << "addres A: " << a << "\n";
    cout << "addres B: " << b << "\n";
    cout << "addres C: " << c << "\n";
    cout << "addres D: " << d << "\n";
    cout << "addres E: " << e << "\n";
    cout << "addres F: " << f << "\n";
    cout << "addres G: " << g << "\n";
    cout << "addres H: " << h << "\n";
    cout << "addres I: " << i << "\n";
    cout << "addres J: " << j << "\n";
    cout << "addres K: " << k << "\n";
    cout << "addres L: " << l << "\n";
    cout << "addres M: " << m << "\n";
    cout << "addres N: " << n << "\n";
    cout << "addres O: " << o << "\n";
    cout << "addres P: " << p << "\n";
    cout << "addres Q: " << q << "\n";
    cout << "addres R: " << r << "\n";
    cout << "addres S: " << s << "\n";
    cout << "addres T: " << t << "\n";
    cout << "addres U: " << u << "\n";
    cout << "addres V: " << v << "\n";
    cout << "addres W: " << w << "\n";
    cout << "addres X: " << x << "\n";
     
}
// main
int main() {
    /**
     * @brief tugas 5 - Data Structures;
     * Nama : M. Acla Alamsyah Putra
     * NIM : 1922423380
     */
    // Operator  Pengerjaan  (Assignment Operators)
    cout << "x = " << x << "\ny = " << y << "\n";
    cout << "\n";
    cout << "Assignment operators:\n\n";
    assignmentOperators(x, y);
    cout << "\n";
    cout << "Aritmatika Operators:\n\n";
    arithmaticOperators(x, y);
    cout << "\n";
    cout << "Increment Operators:\n\n";
    increment(x,y);
    cout << "\n";
    cout << "Decrement Operators:\n\n";
    decrement(x,y);
    cout << "\n";
    cout << "Bitwise Operators:\n\n";
    bitwise(x,y);
    cout << "\n";
    cout << "Relational Operators:\n\n";
    relational(x,y);
    cout << "\n";
    cout << "Logical Operators:\n\n";
    logical(x,y);
    cout << "\n";
    cout << "Address Operators:\n\n";
    address(x,y);
    cout << "\n";
    cout << "Comma Operators:\n\n";
    comma(x,y);
    cout << "\n";
    cout << "Gabungan Operators:\n\n";
    gabungan(x,y);
    cout << "\n";
    cout << "Address Finder:\n\n";
    addressFinder(x, y);
    return 0;
}
