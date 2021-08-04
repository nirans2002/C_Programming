//     Square a number with LSB 5
// Aim: To calculate the square of the number entered by the user, if the least
// significant digit of that number is 5

// Algorithm
// * Read the number
// * With Modular division operation, last digit is separated to confirm whether its or not
// * If it is ‘5’, then square the number, else display LSB not 5 and exit
// * Display the result

#include<stdio.h>
#include<conio.h>

main()
{
    int n=0,LSB=0;
    printf("\n\n  Enter an integer number : ");
    scanf("%d",&n);
    LSB = n%10;
    if(LSB == 5)
    {
        printf("\n\n  The square of %d is %d",n,(n*n));
    }
    else
    {
        printf("LSB is not equal to 5.");
    }
}