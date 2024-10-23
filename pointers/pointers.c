// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a = 10 , c ; 
    int *p;
    p = &a; //storing the address of a in p
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

//fetching pointer address through arrays
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = &arr[0]; 
    int *q = &arr[1]; 
    int *r = &arr[2]; 
    int *s = &arr[3]; 
    int *t = &arr[4]; 
    printf("%x\n",p);
    printf("%x\n",q);
    printf("%x\n",r);
    printf("%x\n",s);
    printf("%x\n",t);
    
    
    return 0;
}
