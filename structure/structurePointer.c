#include<stdio.h>
struct student {
  int rollNumber;
  char name[20];
  float marks;
};
void main(){
  struct student s = {1 , "jerry" , 90};
  struct student *ptr = &s;
  printf("The information for s is:\n");
  printf("Roll number is %d, Name is %s, Marks is %f\n", ptr->rollNumber, ptr->name, ptr->marks);
}


#include <stdio.h>

typedef struct student {
    char fname[20];
    char lname[20];
    int marks;
} stu;

void main() {
    stu u;
    printf("Enter first name : ");
    scanf("%s",u.fname);
    printf("Enter last name : ");
    scanf("%s",u.lname);
    printf("Enter marks : ");
    scanf("%d",&u.marks);
    printf("Full name is %s %s, and marks is %d\n", u.fname, u.lname, u.marks);
}
