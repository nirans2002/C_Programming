// Aim: To count numbers between 1 and 100 which are not divisible by 2, 3 and 5
// Algorithm
// * Numbers from 1 to 100 are checked in a loop
// * Each time perform mod operation with 2,3 and 5
// * If the remainder is not zero, increment the counter
// * End loop
// * Display the counter, as the result. 

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    printf(" The numbers from 1 to 100 which are not divisible by 2,3 and 5.\n");
    for (i=0;i<=100;i++)
    {
        if (i%2!=0 && i%3!=0 && i%5!=0)
        {
            printf("%d\t",i); 
        }
    }
    return 0;
}