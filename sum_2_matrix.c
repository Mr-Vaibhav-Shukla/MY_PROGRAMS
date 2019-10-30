#include<stdio.h>       
int main()                      
{                       
        int m,n,o,p,i,j;
        printf("enter the number of rows and columns of matries \n");
        scanf("%d %d",&m,&n);
        int a[m][n] , b[m][n] , c[m][n];
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
                for(i=0;i<m;i++)
                {               
                        for(j=0;j<n;j++)
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
                for(i=0;i<m;i++)
                {       
                        for(j=0;j<n;j++)
                        {       
                                printf("%d ",b[i][j]);
                        }
                        printf("\n");
                }
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                {
                                        c[i][j]=a[i][j]+b[i][j];
                                
                                }
                        }
                }
                      
                printf("sum of given matrices is\n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                printf("%d ",c[i][j]);
                        }       
                        printf("\n");
                }       
        }       
                
}               
                        
 /**************************************************************************
 
 OUTPUT:
 enter the number of rows and columns of matries 
3 
3
enter the elements of first matrix
1
2
3
4
5
6
7
8
9
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
the elements of first matrix is 
1 2 3 
4 5 6 
7 8 9 
the elements of second matrix is 
9 8 7 
6 5 4 
3 2 1 
sum of given matrices is
10 10 10 
10 10 10 
10 10 10 

***********************************************************************/
