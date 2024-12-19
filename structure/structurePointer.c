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
