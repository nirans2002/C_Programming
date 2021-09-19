// Aim: To find the length of a given string
// Algorithm
//  Read in the string through the keyboard
//  Count the number of characters in the string using a loop
//  Display the value of counter as the length

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char string[1000];
    int n,i;
    printf("Enter the string : ");
    gets(string);

    for (i=0;i<=1000;i++)
    {
        if (string[i]=='\0')
        {
            n = i;
            break;
        }
    }
    // n = strlen(string);
    printf("no of characters : %d",n);
}