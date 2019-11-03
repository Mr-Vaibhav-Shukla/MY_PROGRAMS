#include<stdio.h>
void main()
{
        int a=0,b=1,c=0;
        int n;
        printf("enter the number  of terms upto which you want to print series\n");
        scanf("%d",&n);
        printf("0\t1\t");
        for(int i=1;i<=n-2;i++)
        {
                c=0;
                c=a+b;
                printf("%d\t",c);
        
                a=b;
                b=c;
        
        }
        printf("\n");
}

/**************************************************************************************

OUTPUT:
enter the number  of terms upto which you want to print series                                                                                
10                                                                                                                                            
0       1       1       2       3       5       8       13      21      34    
***************************************************************************************/
