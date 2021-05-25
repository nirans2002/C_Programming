#include<stdio.h>
#include<conio.h>

main()
{
    int i=0,j=0,n=0,m=0;
    printf("\n Program for multiplication table n x m \n ");
    printf("\n\n Enter value for n : ");
    scanf("%d",&n);
    printf("\n\n Enter value for m : ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        printf("MUltiplication table of %d x %d:\n",n,m);
        for(j=1;j<=m;j++)
        {
            printf("%d x %d = %d \n",i,j,i*j);
        }
        printf("\n\n");
    }
}