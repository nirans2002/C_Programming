#include<stdio.h>
#include<conio.h>

void main()
{
    int matrix[3][3]= {1,2,3,4,5,6,7,8,9};
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i>j)
            {
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            
            printf("%d\t",matrix[i][j]);
            
        }
        printf("\n");
    }
}