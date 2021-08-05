// Aim:To check whether the given number is prime or not


// Algorithm:
// Enter the number n
// Perform the ‘mod’ operation from 2 to (n-1).
// If the remainder is zero, ‘n’ is not a prime number.
// If remainder is non-zero, then ‘n’ is a prime number

#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i,flag=0;
    printf("\n Enter an integer: ");
    scanf("%d",&n);
    if (n==1)
        {
            printf(" 1 is niether a prime nor a composite number.");
        }
    for (i=2;i<=(n-1);i++)
    {
        
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        {
            printf("The number %d is a prime number",&n);
        }
    else
        {
            printf("The number %d is NOT a prime number",&n);
        }
    return 0;
}