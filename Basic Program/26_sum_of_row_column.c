#include<stdio.h>
int main()      
{               
                         
        int m,n,i,j;    
        printf("enter the number of rows and columns of matrix\n");
        scanf("%d%d",&m,&n);
        int a[m][n];    
                printf("enter the elements of  matrix row wise\n");
                for(i=1;i<=m;i++)
                {               
                        for(j=1;j<=n;j++)
                        {
                                scanf("%d",&a[i][j]);
                        }
                }       
                int sumR[m],sumC[n];
                for(i=1;i<=m;i++)
                {               
                 sumR[i]=0;
                }       
                for(j=1;j<=n;j++)
                {
                         sumC[j]=0;
                }       
                        
                for(i=1;i<=m;i++)
                {       
                        for(j=1;j<=n;j++)
                        {
                                sumR[i]+=a[i][j];
                        }
                }                      
                  for(j=1;j<=n;j++)
                {       
                        for(i=1;i<=m;i++)
                        {
                                sumC[j]+=a[i][j];
                        }
                
                }
                for(i=1;i<=m;i++)
                {        
                        for(j=1;j<=n;j++)
                        {
                                printf("%d   ",a[i][j]);
                        }
                        printf("|   %d\n",sumR[i]);
                        
                }               
                for(j=1;j<=n;j++)
                        printf("----");
                printf("\n");   
                for(j=1;j<=n;j++)
                        {
                                printf("%d  ",sumC[j]);
                        }
                        printf("\n");
                        
}
/**********************************************************************************

OUTPUT:
enter the number of rows and columns of matrix
3               
3                       
enter the elements of  matrix row wise
1                               
2                       
3                       
4                       
5               
6               
7                       
8               
9               
1   2   3   |   6       
4   5   6   |   15              
7   8   9   |   24      
------------            
12  15  18   

****************************************************************************************/
