#include<stdio.h>
void main()
{
        int i,j,n;
        printf("enter the no. of rows upto which you want to print pyramid\n");
        scanf("%d",&n);
char a[n][n];
for(i=1;i<=n;i++)
{
        for(j=1;j<=n;j++)
        {
                a[i][j]=' ';
        }
}

for(i=1;i<=n;i++)
{
        for(j=n-(i-1);j<=n;j++)
        {
                a[i][j]='*';
        }
}
for(i=1;i<=n;i++)
{
        for(j=1;j<=n;j++)
        {
                printf(" %c ",a[i][j]);
        }
        printf("\n");
}
}
***********************************************************

OUTPUT:

enter the no. of rows upto which you want to print pyramid
8
                      * 
                   *  * 
                *  *  * 
             *  *  *  * 
          *  *  *  *  * 
       *  *  *  *  *  * 
    *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  * 
