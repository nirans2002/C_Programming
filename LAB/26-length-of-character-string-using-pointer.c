// Expt 26: Length of a character string using pointers.

// Aim: Program using pointers to determine the length of a character string

// Algorithm:
// Define a pointer
// Initialize a character string
// While loop defined to find out the end of the character string
// Each element in the string along with their address displayed with the help of
// while loop
// Length of the string found out from the difference between the pointers
// Display the result
#include<stdio.h>
#include<string.h>
int str_len(char *p);
int main()
{
    char str[20];
    int length;
    printf("\nEnter any string : ");
    gets(str);
    length = str_len(str);
    printf("The length of the given string %s is : %d", str, length);
    return 0;
}
int str_len(char*p) 
{
    int count = 0;
    while (*p != '\0') 
    {
        count++;
        p++;
    }
    return count;
}