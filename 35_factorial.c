               
#include<stdio.h>
int main()
{       
        int n;
        printf("enter number\n");
        scanf("%d",&n);
        int p=1;
        for(int i=1;i<=n;i++)
        {
                p*=i;
        }
        printf("%d! = %d \n",n,p);
}
/**********************************************************

OUTPUT:
enter number
8
8! = 40320

*************************************************************/
