#include<stdio.h>
#include<conio.h>

void main()
{
    int A[10],B[10],a,b,i;
    //array 1
    printf("No of the terms in Array 1 : ");
    scanf("%d",&a);
    printf(" Enter the elements of array 1 :\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",&B[i]);
    }
    //array 2
    printf("No of the terms in Array 2 : ");
    scanf("%d",&b);
    printf(" Enter the elements of array 2 :\n");
    for (i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
    }
    // init merged array
    int C[a+b];
    int j;
    
    // adding arrays
    for ( i=0;i<a;i++)
    {
        C[i]= B[i];
    }
    for (i=0,j=a;j<(a+b) && i<b; i++,j++)
    {
        C[j]=B[i];
    }
    // merged array
    printf("merged array\n");
    for(i=0;i<(a+b))
    {
        printf("%d \t",C[i]);
    }
    

}