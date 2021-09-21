
// Aim: To swap two integers using functions by Pass by value and Pass by reference

// Algorithm:
// Function named ‘swap’ which accepts two arguments declared
// (Hint :swap (x ,y))
// ‘swap’ is called in the main program in 2 ways
// (a) The actual value of x and y are copied to the function where swapping is
// done
// (b) The swapping is reflected in the actual parameters by passing reference.
// The original variable is passed and not a copy

#include <stdio.h>
void swap(int *x,int *y)
{
int t;
t = *x;
*x = *y;
*y = t;
}
int main()
{
    int n1,n2;
    printf("Enter value of n1: ");
    scanf("%d",&n1);
    printf("Enter value of n2: ");
    scanf("%d",&n2);
    printf("Before Swapping: n1 is: %d, n2 is: %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After Swapping: n1 is: %d, n2 is: %d\n",n1,n2);
    return 0;
}