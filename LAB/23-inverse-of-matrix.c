
// Aim: To find the inverse of a matrix

// Algorithm:
// Read in the order of the matrix (n x n) say ‘A’
// Read in the matrix elements
// Formula used is A A-1 = I (identity Matrix)
// Let B denote the matrix in RHS
// Assign B = I
// Do the required transformation for A and continue the same for B also, so that
// finally A is reduced to identity matrix
// Display matrix B, which will be the inverse of A

#include<stdio.h>
#define rows 3
#define columns 3

int main()
{
    int a[3][3],i,j;
    float determinant=0;
    for (int i = 0;i < rows;  i++)
    {
        for (int j = 0;j < columns;j++)
        {
            printf("Enter the element in %d row %d column :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }


    printf("\nThe matrix is\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
}
    for(i=0;i<3;i++)
        determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
    printf("\nInverse of matrix is: \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%.2f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/ determinant);
        printf("\n");
    }
    return 0;
}