//Buble sort for 10 No in Ascending order

#include<stdio.h>
#include<conio.h>

main()
{
    int a[10],i,j,temp,n;
    // as we are sorting 10 nos n=10
    n=10;

    //taking input
    printf("enter the numbers to be sorted : \n");
    for (i=0;i<n;i++)
    {
        printf("enter %d number :",i+1);
        scanf("%d",&a[i]);
    }

    //sorting
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j] > a[j+1])  // checking whether the no  is greater than the adjecent one 
            {
                //if yes we swap them 
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // printing the sorted array
    printf("the sorted array in ascending order is : \n \t");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}