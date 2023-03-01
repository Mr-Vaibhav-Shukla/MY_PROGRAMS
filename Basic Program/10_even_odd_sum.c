#include<stdio.h>
int main()
{
        int sum1=0,sum2=0,i=1;
        while(i<101)
        {if(i%2==0)
                sum1 =sum1+i;
                else
                        sum2=sum2+i;
                i++;
        }
        printf("sum of even numbers from 0 to 100 is %d\n",sum1);
        printf("sum of odd numbers from 0 to 100 is %d\n",sum2);
        return 0;
}
        
 /********************************************************************************
 
 OUTPUT:
sum of even numbers from 0 to 100 is 2550
sum of odd numbers from 0 to 100 is 2500

**********************************************************************************/
