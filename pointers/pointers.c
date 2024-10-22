// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a = 10 , c ; 
    int *p;
    p = &a; //stroing the address of a in p
    c = *p;
    //this will print the value of a
    printf("%d\n",a);
    printf("%d\n",*p);
    
    //print the address of a 
    printf("%x\n",&a);
    printf("%x\n",p);
    
    //print the address of p
    printf("%x\n",&p); 
    
    //in this the value of address that are stored in p address will be stored in c variable
    printf("%d",c);
    

    return 0;
}