#include <stdio.h>

/** 
* 
* main - calls other functions
* 
* demonstration of pointers to a function 
* 
*/
 
 void Value(int a)
 {
    printf("Value of a is %i \n\n", a);
 }

 void add(int a,int b)
 {
    printf("Sum is %i\n", a+b);
 }

void difference(int a,int b)
 {
    printf("Difference is %i\n", a-b);
 }

void multiply(int a,int b)
 {
    printf("Product is %i\n", a*b);
 }


int main(void)
{  
    void (*ptr)(int);
    ptr = &Value;
    ptr(10);

    void (*ptrarray[3])(int, int);
    ptrarray[0] = &add;
    ptrarray[1] = &difference;
    ptrarray[2] = &multiply;

    (*ptrarray)(10,15);

    return 0;
}


