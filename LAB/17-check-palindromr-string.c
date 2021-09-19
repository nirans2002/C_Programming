// Aim: To check whether the given string is a palindrome or not
// (Hint: Palindrome word reads same from left to right and right to left)
// Algorithm
//  Read in a string
//  String length is found and assigned to a variable
//  Use a condition inside a loop to check for the 1st and last character equality
//  2 Separate variables are used to point to the first and last characters
//  One variable incremented and the other decremented
//  If found unequal, exit – display not palindrome
//  If found equal, display a palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int length=0,i=0,j=0;
    int flag=0;
    // taking input string
    printf("Enter the string: ");
    gets(string);
    length = strlen(string);
    for (i=0, j=length-1; i<length,j>=0; i++,j--)
    {
        
        if(string[i] != string[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%s is a palindrome",string);
    }
    else
    {
        printf("%s is not a palindrome",string);
    }

    return 0; 
}