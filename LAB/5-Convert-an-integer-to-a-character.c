// Aim: To convert an integer to a character

// Algorithm
// * Declare a variable as type integer
// * Read its value through the keyboard
// * The entered number and ASCII value are checked.
// * If there is a match, display the ASCII value.


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    char c;
    printf("\n\n  Enter an integer: ");
    scanf("%d",&n);

    c = n;
    printf("\n\n  The integer in %d as character is %c ",n,c);
    
    return 0;

}