// Aim: To compare two strings without any standard function and if the strings are
// not identical, display the position where the characters are different
// Algorithm
//  Read in the two strings
//  Using a loop, check the corresponding characters of both the strings
//  If identical, loop is continued
//  Otherwise, a counter variable ‘diff’ is incremented
//  Display the locations where the strings are non identical
//  Display the no: of places, where two strings are different


#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char string1[50];
    char string2[50];
    int diff = 0;
    int flag = 0; 


    printf("Enter the first string\n");
    scanf("%s",&string1);
    printf("Enter the second string\n");
    scanf("%s",&string2);


    for (int i = 0; string1[i] != '\0'; i++) {
        if (string1[i] != string2[i]){
            flag = 1;
            diff = i;
            printf("The strings differ at position %d\n",diff+1);
            
        }
    }

    if (flag == 0){
        printf("The strings are identical");
    }
}