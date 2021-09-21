// Aim: To read two matrices of order 2 x 2 and subtract one from the other using
// functions
// Algorithm
//  Pass the 2 dimensional arrays as argument to functions
//  Size of row is optional, but the column size is must
//  Read the first array using ‘input’ function (use arrays)
//  Input the 2nd array using the same function (use arrays)
//  Subtraction is done by passing the 2 matrices / arrays to the ‘sub’ function
//  Element by Element Subtraction is done inside the ‘sub’ function
//  Display the resultant matrix

#include <stdio.h>
#include <conio.h>

void readM(int matrix, int row, int col)
{
    int i, j;
    int matrix[row][col];
    printf("Type in values \n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
           scanf("%d", matrix[i][j]);
        }
    }
}
int main()
{
    //
    
    return 0;
}