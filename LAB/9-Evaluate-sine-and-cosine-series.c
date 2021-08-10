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
    float x=0,incr;
   
    printf("\n Enter the angle in degrees: ");
    scanf("%f",&x);
    printf("\n Enter the no.of terms in series: ");
    scanf("%d",&n);
    // x to radians
    x = x*3.141/180;

    // cosine series;
    float sum_cos=0;
    sum_cos = 1;
    incr = 1;
    for (i=2;i<=n;i=i+2)
    {
        incr = -(incr*(x*x))/(i*(i-1));
        sum_cos = sum_cos + incr;
    }

    //Sine  Series
    float sum_sin=0;
    incr = x;
    sum_sin = incr;
    for (i=2;i<(n-1);i=i+2)
    {
        incr = -(incr*x*x)/(i*(i+1));
        sum_sin = sum_sin + incr;
    }

    printf("The Sum of Cosine Series is  = %f\n",sum_cos);
    printf("The Sum of Sine Series is  = %f\n",sum_sin);


    return 0;
}