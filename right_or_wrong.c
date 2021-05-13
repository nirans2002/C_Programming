#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum =0;
    printf("Enter two numbers a and b \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("find the the sum of %d and %d and enter : ",a,b);
    scanf("%d",&sum);

    if (sum == a+b)
    {
       printf("correct answer.\n The sum of %d and %d is %d.",a,b,sum );
    }
    else
    {
       printf("wrong answer. sum of %d and %d is NOT %d",a,b,sum);

    }
    return 0;

}