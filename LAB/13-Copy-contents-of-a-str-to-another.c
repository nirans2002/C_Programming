// Aim: To copy the contents of a string to another without using a library function
// Algorithm
//  Declare two arrays of same length
//  Use a loop and copy each character of the source string to the destination
// string
//  Display both the strings

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char string1[100],string2[100];
    int i;
    printf("Enter the String 1 : ");
    gets(string1);
    for (i=0;i<=100;i++)
    {
        string2[i]= string1[i];
    }
    // error in str 1
    
    printf("The string 1 : ");
    puts(string1);
    printf("The string 2 : ");
    puts(string2);

}