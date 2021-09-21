// Aim: To demonstrate working of pointers

// Algorithm:
// Define the pointer
// Display the address and value of the defined variable
// Store address of the variable to pointer
// Display the address and value of the pointer
// Assign a new value to the memory that addressed by the pointer ( the
// variable)
// Display the Display change in the value of the variable

#include <stdio.h>
int main() 
{
    int a=5,*p;
    printf("Address of the variable a is %d\n",&a);
    printf("Value of the variable a is %d\n",a);
    p=&a;   
    printf("Address of the pointer is %d\n",p);
    printf("Value of the pointer is %d\n",*p);
    *p=15;
    printf("The new value of the pointer is %d\n",*p);
    return 0;
}