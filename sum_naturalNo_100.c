#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i=1;i<=100;i=i+1)
    {
        sum = sum + i;
    }
    printf("\n\n\n");
    printf("sum of first 100 natural numbers is %d",sum);
    printf("\n\n\n");
}