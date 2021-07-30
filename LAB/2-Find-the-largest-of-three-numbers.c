// Aim: To find the largest of three numbers

// Algorithm
// * Read 3 numbers A,B,C
// * Assign Large = A
// * Check if B > Large , if Yes Large = B
// * Check if C > Large , if Yes Large = C
// * Display the value of large as the largest number

#include<stdio.h>
#include<conio.h>

main()
{
    int a=0,b=0,c=0,large;
    printf("\n\n  Enter three integers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    large = a;

    if(b>large)
    {
        large =b;
    }
    if(c>large)
    {
        large = c;
    }
    
    printf("\n\n  The largest number is %d",large);
}