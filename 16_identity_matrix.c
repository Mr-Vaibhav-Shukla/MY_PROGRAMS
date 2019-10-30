#include<stdio.h>
void main()
{

        int m,n,i,j;
        printf("enter the equal number of rows and columns of matrix\n");
        scanf("%d%d",&m,&n);
        if(m==n)
        {
        int a[m][n];
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                if(i==j)
                                        a[i][j]=1;
                                else
                                        a[i][j]=0;
                        }
                }
                printf("identity  matrix is \n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                printf("%d ",a[i][j]);
                        }
                        printf("\n");
                }
                }
}

/*************************************************************************************

OUTPUT:
enter the equal number of rows and columns of matrix
5                       
5                               
identity  matrix is     
1 0 0 0 0               
0 1 0 0 0       
0 0 1 0 0 
0 0 0 1 0 
0 0 0 0 1

****************************************************************************************/
