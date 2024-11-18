#include<stdio.h>
int main(){
  int arr[5] = {0,1,2,3,4};
int *ptr = &arr[0];
printf("value is : %d\n",*ptr);//Dereferencing ptr retrieves the value stored at the address it points to, which is the first element (0).

printf("address of a stored in ptr is : %d\n",ptr); //Prints the address of the first element (arr[0]) stored in ptr.

printf("address of p is : %p\n",&ptr); //Prints the memory address of the pointer variable itself, &ptr.

ptr = ptr + 2;//Moves the pointer ptr two positions forward. Now, it points to the third element of the array (arr[2]).

printf("value after update : %d\n",*ptr);//Dereferencing the updated ptr retrieves the value stored at the new location (2).

printf("address of a stored in p after update : %p\n",ptr); //Prints the new address stored in ptr, corresponding to &arr[2].

printf("address of p after update : %d\n",&ptr); //Prints the memory address of the pointer ptr itself. Note that this address remains unchanged because the variable ptr (the pointer itself) is still stored in the same location.
}



//increment and decrement

//increment
#include<stdio.h>
int main(){
  int arr[] = {1,2,3,4,5,6};
  int *ptr = arr;
  printf("%p\n",ptr);
  printf("%d\n",*ptr); //1
  ptr++; //postincrement , updating the value to the next address of arr 
  printf("%d\n",*ptr);//2 wil be print because we used post increment 
}

//decrement
#include<stdio.h>
int main(){
  int arr[5] = {6,7,8,9,10};
  int *ptr = &arr[3];
  printf("%d\n",*ptr);//9
  ptr--; //postfix decrement , decrement the value to previous address of arr
  printf("%d\n",*ptr); //8
}

//example of prefix and postfix
#include<stdio.h>
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int *ptr = arr; //storing the base address of arr variable
  printf("%d %d ", *++ptr,*ptr++); // operation will got to right to left , first it will print 1 , then it will update the value because we are using postfix increment here , after printing it will update to 2 ,then 2nd operation will occur where we using prefix increment which update the value first then print the value , that will be 3.

  printf("%d %d ", *--ptr,ptr--); //here the ptr was storing the value of 3 , we are using post-decrement , so first it will print 3 , then it will decrement the value to previous address , which is 2 , then 2nd operation will occur , where we are using prefix decrement , which will decrement the value first then it will print , that will be 1.
}


//problem 1
#include<stdio.h>
int main(){
  int a[] = {10,11,-1,43,65,7,3,45};
  int *p , *q; 
  p = a;
  printf("%d\n",*p); //10
  printf("%d %d %d %d\n",*p,(*p)++,*p++,*++p); //0 -1 11 11
  q = p + 3;
  printf("%d\n",*q); //7
  printf("%d\n",*q - 3); //4
  printf("%d\n",*p + *q); //7
}

//problem 2
#include<stdio.h>
void main(){
  int a[] = {10,11,-1,56,67,5,4};
  int *p , *q;
  p = a; 
  q = &a[0] + 3;
  printf("%d\n %d\n  %d\n  ",(*p)++,(*p)++,*(++p)); //12 11 11
  printf("%d\n ",*p); //13
  printf("%d\n ",++(*p)); //14
  printf("%d\n ",(*p)++); //14
  printf("%d\n",*p); //15
  q--;
  printf("%d\n ",(*(q+2))--); //67
  printf("%d\n ",*q); //-1
  printf("%d\n ",*(p+2)-2); //54
  printf("%d\n ",*(p++ - 2) - 1); //-1
  printf("%d %d",*p , *q); //-1 -1
 
}
#include <stdio.h>
void main() {
  const int a = 10;
  const int *p = &a; // Declaring a pointer to a constant integer; p can read the value of 'a' but cannot modify it.
//   p = 10; // Error: can't assign a new value to 'p' since it's declared as a pointer to const.
  printf("%d", a); // Output: 10
}
