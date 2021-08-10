// bla bla bla in lab date : 10-08-2021

#include<stdio.h>
main()
{
    char str1[20],str2[20];
    int i,n=0;
    printf("emter thr string: \n");
    gets(str1);

    // find no of elemts
    for (i=0;i<20;i++)
    {
        if (str1[i]=='\0')
        {
            n=i;
            break;
        }
    }
    printf("the len of str1 : %d",n);

    // copy str
    for (i=0;i<n;i++)
    {
        str2[i] = str1[i];
    }
    printf("the new str :\n ");
    puts(str2);


}