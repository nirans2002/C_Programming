#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,r,sum=0;
    printf("\n\n Enter a number: ");
    scanf("%d",&n);
    a=n;

    while (n>0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(sum == a)
    {
        printf("\n\n  The number %d is an Angstrong Number.",a);
    }
    else 
    {
        printf("\n\n  The number %d is NOT an Angstrong Number.",a);
    
    }
    
}