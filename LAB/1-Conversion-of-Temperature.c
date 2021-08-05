// Aim: Convert the temperature in degree Celsius to Fahrenheit

// Algorithm
// * Read temperature in degree Celsius into a variable C
// * Calculate F using the formula F = 9/5 C + 32
// * Display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    float c=0,f=0;
    printf("\n\n  Enter the temperature value in Celsius :");
    scanf("%f",&c);
    f = (c*9/5) + 32 ;
    printf("\n\n  The temperature in Fahrenheit : %f",f);
    return 0;
}
