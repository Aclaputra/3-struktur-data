#include <iostream>
#include <queue> // header file to use queue functionalities in C++
using namespace std;
/**
 * Nama: M.Acla Alamsyah Putra
 * Nim: 1922423380
 */

int main()
{
// declaration of deck named deck
queue<string> deck;
// inserting element in the deck container
deck.push("_");
deck.push("R");
deck.push("I");
deck.push("N");
deck.push("_");
deck.push("_");

// A.Masukkan A di kanan dari de-queue
deck.push("A");
// B.Hapus Dua elemen dari kanan
deck.pop();
deck.pop();
// C.Masukkan N, O dan V dari kanan dequeue
deck.push("N");
deck.push("O");
deck.push("V");
// D.Hapus Satu elemen dari kiri
deck.pop();
deck.pop();
// E.Masukkan I dari kiri dequeue
deck.push("I");
// F.Masukkan S dari kiri dequeue
deck.push("S");
// H.Hapus Tiga elemen dari kanan
deck.pop();
deck.pop();
deck.pop();

// Removing/Extracting the content from the deck container
while (!deck.empty()) {
cout << ' ' << deck.front();
deck.pop();
}

return 0;
}