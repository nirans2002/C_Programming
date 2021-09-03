// Aim: To sort an array of N integers in ascending order
// Algorithm
//  Store N integers in an array
//  First element taken, compared with all other elements of the same array, the
// process is continued till the last element, in a loop
//  Interchange the elements if required
//  End loop
//  Display the final sorted array

//Buble sort for 10 No in Ascending order

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,temp,n;
    //taking input
    printf("Enter the no.of elemts in the array: ");
    scanf("%d",&n);
    // init array with n elements
    int a[n];
    printf("Enter the numbers to be sorted : \n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d element :",i+1);
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
    printf("The sorted array in ascending order is : \n \t");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}