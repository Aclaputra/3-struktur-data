#include <iostream>
#include <queue> // header file to use queue functionalities in C++
using namespace std;
/**
 * Nama: M.Acla Alamsyah Putra
 * Nim: 1922423380
 */

int main()
{
// declaration of queue named queue
queue<string> queue;
// inserting element in the queue container
queue.push("_");
queue.push("D");
queue.push("I");
queue.push("N");
queue.push("_");
queue.push("_");

// A.Masukkan A ke dalam Queue
queue.push("A");
// B.hapus 2 elemen
queue.pop();
queue.pop();
// C.masukkan P, R, S ke dalam Queue
queue.push("P");
queue.push("R");
queue.push("S");
// D.hapus 2 elemen
queue.pop();
queue.pop();
// E.masukkan U kedalam Queue
queue.push("U");
// F.hapus 2 elemen
queue.pop();
queue.pop();
// G.masukkan T kedalam Queue
queue.push("T");
// H.hapus 2 elemen
queue.pop();
queue.pop();
// I.hapus 1 elemen
queue.pop();

// Removing/Extracting the content from the queue container
while (!queue.empty()) {
cout << ' ' << queue.front();
queue.pop();
}

return 0;
}