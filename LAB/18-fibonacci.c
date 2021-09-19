// Aim: To generate a Fibonacci series
// Algorithm
//  Read n, the number of terms to be generated.
//  Term 1 = 0, term2 = 1.
//  Display term1, term2.
//  Vary the counter in a loop from 0 to (n – 1) incremented by 1.
// Department of Electrical Engineering, College of Engineering, Thiruvananthapuram
// Software Laboratory Manual Page 18
//  Term = term1 + term2.
//  Display term.
//  Term 1 =term2.
//  Term 2 = term -->
//  End loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,term=0,term1=0,term2=1;
    printf("Enter no of terms required : ");
    scanf("%d",&n);
    term1=0;
    term2=1;
    printf("%d\t",term1);
    printf("%d\t",term2);
    for (int i=1;i<=n-1;i++)
    {
        term = term1 + term2;
        printf("%d\t",term);
        term1 = term2;
        term2 = term;
    }
    return 0;
}