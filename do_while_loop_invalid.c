#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    i=1;
    printf("enter a positive number : ");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
    } while (i>n);
    
}
/* Here the condition for do while loop is i>n, and for every value of n,
i is not greater than n , therefore the condition is false.
since do while loop is an exit control loop, the loop body is executed once printing 1 as output. */