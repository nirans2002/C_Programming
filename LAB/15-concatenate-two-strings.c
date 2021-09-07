// Aim: To concatenate two strings without a standard function
// Algorithm
//  Read in the two strings
//  Declare a 3rd string to store the concatenated string
//  Use a loop, store the 1st string to the third
//  Store the 2nd string to the 3rd, starting from the current position
//  Display the third string

#include <stdio.h>
#include <conio.h>

void main()
{
    int i=0;
    char string1[100];
    char string2[100];
    char string3[100];


    printf("Enter the first string\n");
    scanf("%s",&string1);
    printf("Enter the second string\n");
    scanf("%s",&string2);

     for (i = 0; string1[i] != '\0'; i++)
     {
       string3[i] = string1[i];
       
     }
     for (int  j = i+1 ; string2[j] != '\0'; j ++)
     {
       string3[j] = string2[j];
     }

     printf("The string after concatenation:\n");
    
     printf("%s",string3);
  
}
// TODO: not done error
