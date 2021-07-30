// Aim: To swap the values of two variables without using a third variable

// Algorithm
// * Read and assign to variables
// * Sum of variables stored to the 1st variable
// * Difference of the current 1st variable and 2nd variable is stored as the new 2nd variable
// * The difference of the current variables are stored as the 1st variable
// * Display the result

#include<stdio.h>
#include<conio.h>

main()
{
    int a=0,b=0;
    printf("\n\n Enter two numbers to swap(a,b):\n");
    scanf("%d,%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n\n the swaped values are %d,%d",a,b);
    
}
