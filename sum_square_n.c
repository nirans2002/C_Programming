#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,sum=0;
    printf("Enter a value for n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+1)
    {
        sum = sum + (i*i);
    }
    printf(" sum of sqaures of first %d natural nos is %d",n,sum);
}