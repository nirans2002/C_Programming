#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    // taking user input and storing in the array
    for(i=0;i<10;i++)
    {
        printf("\n\n Enter %d number of array : ",i+1);
        scanf("%d",&a[i]);
    }
    //displaying the array

    printf("\n the array is :\n\n");
    for(i=0;i<10;i++)
    {
        
        printf("%d \t ",a[i]);
    }
}