#include<stdio.h>
int gcd(int a,int b)
{
        int c;
        c=a%b;
        if(c==0)
                return b;
        else 
                gcd(b,c);
}
int main()
{
        int m,n,c;
        scanf("%d%d",&m ,&n);
        c=gcd(m,n);
        printf("\n gcd is %d \n",c);
        return 0;
}

/*******************************************************

OUTPUT:
32
24

 gcd is 8 
 
 *******************************************************/
