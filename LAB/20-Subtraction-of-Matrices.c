// Aim: To read two matrices of order 2 x 2 and subtract one from the other using
// functions
// Algorithm
//  Pass the 2 dimensional arrays as argument to functions
//  Size of row is optional, but the column size is must
//  Read the first array using ‘input’ function (use arrays)
//  Input the 2nd array using the same function (use arrays)
//  Subtraction is done by passing the 2 matrices / arrays to the ‘sub’ function
//  Element by Element Subtraction is done inside the ‘sub’ function
//  Display the resultant matrix

#include <stdio.h>
#include <conio.h>
//function prototype
int sub(int *A[],int *B[],int row,int col);
int main()
{
    // martices 2 x 2
    int A[2][2], B[2][2],result[2][2];
    int i,j;
    printf("Enter the first matrix:\n");
    for (int i = 0; i <=2;  i++)
    {
        for ( int j = 0;j <= 2; j++)
        {
            printf("Enter the element in %d row %d column: ");
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for (int i = 0; i <=2;  i++)
    {
        for ( int j = 0;j <= 2; j++)
        {
            printf("Enter the element in %d row %d column: ");
            scanf("%d",&B[i][j]);
        }
    }
    sub(A,B);
    return 0;
}
int sub(int *A[],int *B[],int row,int col)
{
    for(int i=0;i<=row;i++)
    {
        printf("%d \t",A[i]-B[i]);
    }
}
// TODO #2: