#include<stdio.h>
void main()     
{
        int n;
        float sum=0;
        printf("enter number of elements \n");

        scanf("%d",&n);
        int a[n];
        printf(" now enter %d elements\n",n);
        for(int i=1;i<=n;i++)
        {       
                scanf("%d",&a[i]);
                sum+=a[i];
        }
        float avg;
        avg = sum/n;
        printf("average of %d elements is %0.2f \n",n,avg);
}       
        
/*********************************************************************************

OUTPUT:
enter number of elements 
6
 now enter 6 elements
16
48
23
25
34
28
average of 6 elements is 29.00
