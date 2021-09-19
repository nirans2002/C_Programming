// Aim: To reverse a given string
// Algorithm
//  Read in a string, ‘str’
//  Declare a 2nd string, ‘rev_str’
//  Using a loop, position a variable ‘i' to the last position of original string (not
// the null character
//  Assign j=0
//  Copy the contents of the given string ‘str’ onto the reverse string ‘rev_str’,
// using the relation rev_str [j] = str [i]
//  Increment j and decrement i till i>=0
//  Display rev_str as the result
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char rev_str[100];
    int i=0,j=0;
    
    printf("Enter the string: ");
    gets(str);
    i = strlen(str)-1;
    for (j=0; j<=strlen(str),i>=0;j++,i--)
    {
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0';
    printf("the reversed String is : ");
    puts(rev_str);

    return 0;
}