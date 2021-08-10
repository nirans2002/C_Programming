// Aim: To solve a quadratic equation

// Algorithm
// * Read in the values of the coefficients as A, B and C
// * Evaluate D = B2– 4 * A * C
// * Check if D>0
//      If Yes , the 1st root = R1 = -B + D /2A
//      2nd root = R2 = -B + D /2A
// * If D=0
//   R = -B /2A,
// Display roots
// * If D < 0
// Display the roots as imaginary

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the coefficients a,b,c : ");
    scanf("%f,%f,%f",&a,&b,&c);
    d = (b*b) - (4*a*c);
    
    if (d > 0)
    {
        r1 = (-b + sqrt(d))/(2*a) ;
        r2 = (-b - sqrt(d))/(2*a) ;
        printf("The Equation has real roots.\n");
        printf(" root 1 : %f\n",r1); 
        printf(" root 2 : %f\n",r2);
    }

    else if (d==0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("The Equation has Equal roots.\n");
        printf(" root 1 : %f\n",r1); 
        printf(" root 2 : %f\n",r2);
    }

    if(d<0)
    {

        printf("The Equation have complex roots.\n");
        printf(" root 1 : %f + i%f\n", -b/(2*a), (sqrt(-d))/(2*a)); 
        printf(" root 2 : %f - i%f\n", -b/(2*a), (sqrt(-d))/(2*a)); 
    }
    
    return 0;
}