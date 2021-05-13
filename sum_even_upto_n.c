#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,sum=0;
    printf("\n\nEnter a value for n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
    {
        sum = sum + i;
    }
    printf("\n\nsum of even numbers upto %d = %d\n\n\n",n,sum);
}