
// Expt -27 : Sum of all elements stored in an array using pointers

// Aim: Program using pointers to compute the sum of all elements stored in an array

// Algorithm:
// Define a pointer
// Read array elements
// Perform addition of all elements stored in an array, using pointers
// Display the result

#include<stdio.h>
#include<conio.h>
void main() 
{
    int numArray[10];
    int i, sum = 0;
    int *ptr;
    printf("\nEnter 10 elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numArray[i]);
    }
    ptr = numArray;
    for (i = 0; i < 10; i++) 
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("The sum of array elements : %d", sum);
}