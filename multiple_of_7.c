#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if (a % 7 == 0)
    {
        printf("\n\n%d is a multiple of 7\n\n",a);
    }
    else{
        printf("\n\n%d is not a multiple of 7\n\n",a);
    }
}