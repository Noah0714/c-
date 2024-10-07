#include <stdio.h>
int main()
{
    for(int a=0;a<2;a++)
    {
        for(int b=0;b<5;b++)
        {
            printf(" ");
        }
         for(int c=0;c<2;c++)
        {
            printf("*");
        }
        printf("\n");
        if(a==1)
        {
            for(int d=0;d<2;d++)
            {
                printf("************\n");
            }
            for(int f=0;f<2;f++)
            {
                for(int e=0;e<13;e++)
                {
                    if(e==4||e==7)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                    if(e==12)
                    {
                        printf("\n");
                    }
            }   }
        
            
        }


        
    }




}