#include<stdio.h>
#include<conio.h>
main()
{
    int i,sum=0;
    for(i=1;i<=20;i=i+2)
    {
        sum = sum + i;
    }
    printf("sum of even numbers upto 20 is %d",sum);
}
