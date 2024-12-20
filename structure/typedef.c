#include <stdio.h>

// Define a structure named 'student' to represent a student's details.
typedef struct student {
  int rollNumber;  // Integer to store the roll number of the student.
  char name[20];   // Character array to store the name of the student (up to 19 characters + null terminator).
  float marks;     // Float variable to store the marks obtained by the student.
} stu;             // 'stu' is an alias for 'struct student'.

// Main function where program execution begins.
void main() {
  // Declare and initialize a structure variable 's' of type 'stu'.
  // Assign roll number as 1, name as "nick", and marks as 20.
  stu s = {1, "nick", 20};

  // Print the details of the student.
  // Access each member of the structure using the dot operator.
  printf("roll number - %d , name - %s , marks - %f ", s.rollNumber, s.name, s.marks);
}

// Definition of 'alias':
// An alias is an alternative name or shortcut used to refer to something.
// In this code, 'stu' is an alias for 'struct student', allowing us to use 'stu'
// as a shorthand to declare variables of type 'struct student'.
