#include<stdio.h>
void main()
{
        int a=1,b=1,c=0;
        int n;
        printf("enter the number upto which you want to print series\n");
        scanf("%d",&n);
        printf("1\t1\t");
        while(c<=n)
        {
                c=0;
                c=a+b;
                if(c<=n)
                printf("%d\t",c);
        
                a=b;
                b=c;
        
        }
        printf("\n");
}

/**************************************************************************************

OUTPUT:
enter the number upto which you want to print series
35
1       1       2       3       5       8       13      21      34

***************************************************************************************/
