#include <stdio.h>
#pragma pack(1)  // Disable structure padding; members are packed tightly
struct abc {
  char a;   // 1 byte (character)
  int b;    // 4 bytes (integer)
  char c;   // 1 byte (character)
};

void main() {
  struct abc s;  // Declare a variable of type 'struct abc'
  printf("%d", sizeof(s));  // Print the size of the structure
}


///Memory Layout Explanation with #pragma pack(1):
// First Member: char a

// char takes 1 byte.
// Since packing is enabled, no padding is added after char a.
// Second Member: int b

// int takes 4 bytes.
// int b is placed immediately after char a, occupying the next 4 bytes.
// Third Member: char c

// char takes 1 byte.
// char c is placed immediately after int b, occupying the next 1 byte.
// No padding is added after char c, as the structure is tightly packed.
// Total Memory Layout:
// char a : 1 byte
// int b : 4 bytes
// char c : 1 byte
// Total Size: 6 bytes
// Key Notes:
// Using #pragma pack(1) forces the compiler to disable padding, resulting in a tightly packed structure.
// The sizeof(s) will return 6, which is the exact sum of the sizes of the members (1 + 4 + 1 = 6), with no extra padding.
// While this saves memory, it may result in slower memory access on some architectures, as unaligned accesses can be less efficient.