#include<stdio.h>
#include<conio.h>

main()
{
    int matrixA[4][4],matrixB[4][4],matrixSum[4][4],i,j;
    printf("\n\n");
    printf("Enter Matrix A :");

    //taking input for matrix A
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("\n enter %d row %d column element : ",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }

    //taking input for matrix B
    printf("Enter Matrix B :");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("\n enter %d row %d column element : ",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }
    //Adding the matrix 
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            matrixSum[i][j]= matrixA[i][j] + matrixB[i][j];
        }
    }
    //printing the sum matrix
    printf("\n\n");
    printf("The Sum of the entered matrices is : \n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d \t",matrixSum[i][j]);
        }
        printf("\n");
    }


}