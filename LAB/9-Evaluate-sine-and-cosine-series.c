// Aim: To evaluate sine and cosine series
// Algorithm
// (a) Sine Series
//  Input the angle in degrees and number of terms as X and N respectively
//  Convert angle to radians and assign it to X
//  Assign the 1st term as angle in radians
//  Initialize the sum variable as 1st term
//  Vary a counter from 2 to N-1 with an increment two (Set the counter as i)
//  Set the increment value as Incr
//  Update Incr with – Incr *X2/ (i * (i + 1)
//  Add sum with Incr until i = N - 1
//  End loop
//  Display sum as the result
// (b) Cosine Series
//  Input the angle in degrees and the number of terms as X and N respectively
//  Convert angle to radians
//  Initialize the sum variable as 1
//  Vary a counter from 2 to N with an increment 2
//  Set the counter as i
//  Set the increment values as Incr
//  Update Incr = Incr *X2/ (i * (i - 1)
//  Add sum with Incr until i = N
//  End loop
//  Display sum as the result


#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n;
    float x,rad=0,sum,t;
    rad = x*3.141/180;

    printf("\n Enter the angle in degrees: ");
    scanf("%f",&x);
    printf("\n Enter th no.of terms in series: ");
    scanf("%d",&n);
    printf("rad %f",rad);


    return 0;
}