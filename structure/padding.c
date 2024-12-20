#include <stdio.h>

// Define a structure named 'abc'
struct abc {
  char a;   // 1 byte (character)
  int b;    // 4 bytes (integer)
  char c;   // 1 byte (character)
  // Padding will be added to align the structure members to the largest alignment requirement (4 bytes in this case)
};

void main() {
  struct abc s;  // Declare a variable of type 'struct abc'
  printf("%d", sizeof(s));  // Print the size of the structure
}

// Memory Layout and Padding Explanation:
// First Member: char a

// char takes 1 byte.
// To align the next member (int b) to its natural boundary (4 bytes), 3 bytes of padding are added after char a.
// Second Member: int b

// int takes 4 bytes and is naturally aligned on a 4-byte boundary. It occupies 4 bytes starting from the 4th byte.
// Third Member: char c

// char takes 1 byte.
// To align the structure size to a multiple of the largest alignment requirement (4 bytes for int), 3 bytes of padding are added after char c.
// Total Memory Layout:
// char a : 1 byte
// Padding after a : 3 bytes
// int b : 4 bytes
// char c : 1 byte
// Padding after c : 3 bytes
// Total Size: 12 bytes
// Key Notes:
// The sizeof(s) will return 12, not just the sum of the sizes of the individual members (1 + 4 + 1 = 6), because of the padding added for alignment.
// The alignment ensures that the structure is efficient for the system's memory access mechanisms.