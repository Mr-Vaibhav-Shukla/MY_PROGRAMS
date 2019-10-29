#include<stdio.h>
int main()
{
        int sum=0,i=1;
        do
        {
                sum =sum+i;
                i++;
        }
        while(i<101);
        printf("sum of numbers from 0 to 100 is %d\n",sum);
        return 0;
}
       
 /************************************************************************
 
 OUTPUT:
 sum of numbers from 0 to 100 is 5050
 
 **************************************************************************/
