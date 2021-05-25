#include<stdio.h>
#include<conio.h>

main()
{
    int i=1,j=1,n=0,m=0;
    printf("\n Program for multiplication table n x m \n ");
    printf("\n\n Enter value for n : ");
    scanf("%d",&n);
    printf("\n\n Enter value for m : ");
    scanf("%d",&m);

    do
    {
        printf("\n\n Multiplication table of %d x %d \n",n,m);
        j=1;
        do
        {
            printf("%d x %d = %d\n",i,j,i*j);
            j++;
        } while (j<=m);
        
        i++;

    } while (i<=n);
        
}