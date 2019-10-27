#include<stdio.h>
int main()
{
        int m,n,o,p,i,j,k,sum=0;
        printf("enter the number of rows and columns of first matrix\n");
        scanf("%d %d",&m,&n);
        printf("enter the number of rows and columns of second matrix\n");
        scanf("%d %d",&o,&p);
        int a[m][n] , b[o][p] , c[m][p];
        if (n!=o)
        {
                printf("product of matrices is not possible\n");
        }
        else
        {
                printf("enter the elements of first matrix\n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                scanf("%d",&a[i][j]);
                        }
                }
                printf("enter the elements of second matrix\n");
                for(i=0;i<o;i++)
                {
                        for(j=0;j<p;j++)
                        {
                                scanf("%d",&b[i][j]);
                        }
                }
                printf("the elements of first matrix is \n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                printf("%d ",a[i][j]);
                        }
                         printf("\n");
                }       
                printf("the elements of second matrix is \n");
                for(i=0;i<o;i++)
                {
                        for(j=0;j<p;j++)
                        {
                                printf("%d ",b[i][j]);
                        }       
                        printf("\n");
                }       
                for(i=0;i<m;i++)
                {       
                        for(j=0;j<p;j++)
                        {       
                                for(k=0;k<o;k++)
                                {       
                                sum=sum+a[i][k]*b[k][j];
                                }
                                c[i][j]=sum;
                                sum=0;
                        }
                }
                printf("product of given matrices is\n");
                for(i=0;i<m;i++)
                {       
                        for(j=0;j<p;j++)
                        {       
                                printf("%d ",c[i][j]);
                        }
                        printf("\n");
                }       
        }              
    ****************************************************************************
    
    OUTPUT:
enter the number of rows and columns of first matrix
2                       
3                               
enter the number of rows and columns of second matrix
3                       
4               
enter the elements of first matrix
1               
2                       
3                       
4                               
5                               
6                                       
enter the elements of second matrix
9                               
8                               
7                       
6               
5               
4               
3               
2                       
1                       
6                               
5                       
4                       
the elements of first matrix is 
1 2 3 
4 5 6 
the elements of second matrix is 
9 8 7 6 
5 4 3 2                 
1 6 5 4                         
product of given matrices is
22 34 28 22                                                    
67 88 73 58 
