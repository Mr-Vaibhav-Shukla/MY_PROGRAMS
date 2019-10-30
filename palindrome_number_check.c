#include<stdio.h>
int main()
{
        int sum=0,digit;
        int n, temp;
        printf("enter any positive integer number\n");
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
                digit=temp%10;
                temp/=10;
                sum=sum*10+digit;
        }
        if(n==sum)
                printf("\n %d is a palidrome number\n",n);
        else
                printf("\n %d is not a palidrome number\n",n);
}

/***********************************************************************

OUTPUT:
-------------------------------------------------------------------------
enter any positive integer number
12321   
        
 12321 is a palidrome number
-------------------------------------------------------------------------
enter any positive integer number
12654   
        
 12654 is not a palidrome number
 --------------------------------------------------------------------------
 
 **************************************************************************/
