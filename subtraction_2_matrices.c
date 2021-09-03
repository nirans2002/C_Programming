#include <stdio.h>
#include <conio.h>

void main()
{
    // martices 2 x 2
    int A[2][2], B[2][2],sum[2][2];
    int i,j;
    printf("Enter the first array:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("\n enter %d row %d column element : ",i+1,j+1);

            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the second array:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("\n enter %d row %d column element : ",i+1,j+1);

            scanf("%d",&B[i][j]);
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<2; j++)
        {
        sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The Sum of the matrices :\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2; j++)
        {
            printf("%d \t",sum[i][j]);

        }
        printf("\n");   
    }

}