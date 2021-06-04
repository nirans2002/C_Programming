#include<stdio.h>
#include<conio.h>
main(){
    int i,n,sum_even,sum_odd;
    printf("\n\n program give sum of even and odd numbers upto n\n\n" );
    printf("Enter a value of n :");
    scanf("%d",&n);

    do
    {
        
       if(i%2 == 0){
            sum_even=sum_even + i;
        }
        else{
            sum_odd=sum_odd +i;
        }
        i++;
    } while (i<=n);
    
    printf("\n\n The sum of even numbers upto %d : %d",n,sum_even);
    printf("\n\n The sum of odd numbers upto %d : %d",n,sum_odd);
}