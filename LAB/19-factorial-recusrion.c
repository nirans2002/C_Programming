// Aim: To find the factorial of a given number using recursion
// Algorithm
//  Read the value of ‘n’, whose factorial is to be found
//  Function call F=factorial (n);
//  Inside the function factorial (x) define a local variable x
//  If (X==1) return 1
//  Else fact = x* fact (x-1)
//  Return fact
//  Display fact

#include <stdio.h>
#include <conio.h>

factorial(int x)
{
    int fact;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        fact = x*factorial(x-1);
    }
    return fact;
}

void main()
{
    int n,F;
    printf("Enter a the number to find factorial : ");
    scanf("%d", &n);
    F = factorial(n);
    printf("The Factorial of %d = %d",n,F);
}