#include<stdio.h>

// Defining a structure named Student with three members: roll_number, name, and marks
struct Student {
    int roll_number;  // Integer to store the roll number of the student
    char name[20];    // Character array to store the name of the student (up to 19 characters + 1 for null terminator)
    float marks;      // Float to store the marks of the student
};

void main() {
    // Initializing an instance of struct Student named S1
    // Only roll_number is initialized to 21, name and marks remain uninitialized
    struct Student S1 = {21};

    // Initializing another instance of struct Student named S2
    // roll_number is set to 1, the first character of name is set to 'h', and marks is set to 20.0
    // The rest of the characters in name are uninitialized
    struct Student S2 = {1, 'h', 20};

    // Printing the roll_number of S1 (expected output: 21)
    printf("%d\n", S1.roll_number); 

    // Printing the first character of name for S1 (may output garbage because it is uninitialized)
    printf("%c\n", S1.name[0]);

    // Printing the marks of S1 (may output garbage because it is uninitialized)
    printf("%f\n", S1.marks);

    // Printing the roll_number of S2 (expected output: 1)
    printf("%d\n", S2.roll_number);

    // Printing the first character of name for S2 (expected output: 'h')
    printf("%c\n", S2.name[0]);

    // Printing the marks of S2 (expected output: 20.000000, because it's a float)
    printf("%f\n", S2.marks);
}




//copying elements amd taking input from user 
#include<stdio.h>
struct student {
  int rollNo;
  char name[20];
  float marks;
}s1 = {20,"harry",80};
void main(){
  struct student s2 = {12,"jenny",90};
  struct student s3;
  s3 = s2; //copying the initialized value of s2 to s3
  printf("info for s1 : ");
  printf("%d %c %f \n",s1.rollNo , s1.name[0], s1.marks);
  printf("info for s2 : ");
  printf("%d %c %f \n",s2.rollNo , s2.name[0], s2.marks);
  printf("info for s3 : ");
  printf("%d %c %f \n",s3.rollNo , s3.name[0], s3.marks);

  struct student s4;
  printf("enter elements for s4 : ");
  scanf("%d %c %f",&s4.rollNo , s4.name , &s4.marks); //taking value from user of s4
  printf("info for s4 : ");
  printf("%d %c %f ",s4.rollNo , s4.name, s4.marks);
}
