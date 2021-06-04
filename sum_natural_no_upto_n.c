#include<stdio.h>
#include<conio.h>
main()
{
     int i=0,n=0,sum=0;
    printf("\n\nEnter a value for n : ");
    scanf("%d",&n);

    do
    {
        sum= sum+i;
        i++;
    } while (i<=n);

    printf("%d",sum);
}