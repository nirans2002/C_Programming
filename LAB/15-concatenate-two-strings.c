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
    int i=0,j=0;
    char string1[100];
    char string2[100];
    char string3[100];


    printf("Enter the first string\n");
    scanf("%s",&string1);
    printf("Enter the second string\n");
    scanf("%s",&string2);

     while(string1[i] != '\0')
     {
       string3[i] = string1[i];
       i++;
       j++;
       
     }
     i=0;
     while(string2[i] != '\0')
     {
       string3[j] = string2[i];
       i++;
       j++;
     }

     printf("The string after concatenation:\n");
    
     printf("%s",string3);
  
}
