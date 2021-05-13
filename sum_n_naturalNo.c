#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    //input for n
    printf("Enter a value for n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i=i+1)
    {
        sum = sum + i;
    }
    printf("\n\n\n");
    printf("sum of first %d natural numbers is %d",n,sum);
    printf("\n\n\n");

    return 0;
}