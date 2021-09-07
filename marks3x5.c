#include<stdio.h>
#include <conio.h>

void main()
{
    int A[3][5];
    int i,j;
    int max = 0;
    
    for (i=0; i<3; i++)
    {
        printf("Enter the marks of student %i :\n",i+1);
        for (j=0; j<5; j++)
        {
            printf("\n enter mark for subject %d : ",j+1);

            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<3; i++)
    {
        max =0;
        for(j=0;j<5;j++)
        {
            if (A[i][j]>max)
            {
                max = A[i][j];
            }
            
        }
        printf("max mark of subject %d is %d\n",i+1,max);
    }

        
}
