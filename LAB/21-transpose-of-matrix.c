// Aim: To find the transpose of an ‘n x n’ matrix
// Algorithm
//  Read in the size of the matrix
//  Read in he matrix elements (using arrays)
//  Interchange Rows and Columns, using two loops
// (Hint: The rows elements become column elements and vice versa)
//  Display the row elements as columns elements
//  Display the column elements as row elements

#include <stdio.h>
#include <conio.h>
int main()
{
    int rows=0,columns=0;

    printf("Enter the no of rows of the matrix: ");
    scanf("%d",&rows);
    printf("Enter the no of columns of the matrix: ");
    scanf("%d",&columns);

    int matrix[rows][columns];
    int transpose[columns][rows];

    for (int i = 0;i < rows;  i++)
    {
        for (int j = 0;j < columns;j++)
        {
            printf("Enter the element in %d row %d column :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    //transposing the matrix
    for (int i = 0;i < rows;  i++)
    {
        for (int j = 0;j < columns;j++)
        {
            transpose[j][i] =matrix[i][j];
        }
    }
    //printing the entered matrix
    printf("The Entered matrix:\n");
    for (int i = 0;i < rows;  i++)
    {
        for (int j = 0;j < columns;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    // printing the transpose of the matrix
    printf("The transpose of the matrix:\n");
    for (int i = 0;i < columns;  i++)
    {
        for (int j = 0;j < rows;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}