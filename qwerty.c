#include<stdio.h>

void input(int r,int c,int x[20][20]);
void sub(int p,int q ,int c[20][20],int d[20][20], int e[20][20]);
void main()
{    
      int r1,r2,c1,c2,a[20][20],b[20][20],diff[20][20];
      printf("Enter the number of rows and columns of first matrix: \n");
      scanf("%d %d",&r1,&c1);
      printf("Enter the elements of first matrix: \n");
      input( r1, c1,a);
      printf("Enter the number of rows and columns of second matrix: \n");
      scanf("%d %d",&r2,&c2);
      printf("Enter the elements of second matrix: \n");
      input( r2, c2,b);
      if(r1!=r2 || c1!=c2)
            printf("error dimensions of matrices are not the same \n");
      else
            sub(r1,c1,a,b,diff);
 }
void input(int r,int c,int x[20][20])
{
     int i,j;
     for(i=0;i<r;i++)
        for(j=0;j<c;j++)
                 scanf("%d",& x[i][j]);
}
void sub(int p,int q ,int c[20][20],int d[20][20], int e[20][20])
{
         int i,j;
         printf("diference of two matrices \n");
         for(i=0;i<p;i++)
         {
              for(j=0;j<q;j++)
              {
                   e[i][j]=c[i][j]-d[i][j];
                   printf("%d\t",e[i][j]);
               }
                    printf("\n");
            }
}