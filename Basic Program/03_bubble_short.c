#include<stdio.h>
int main()
{
        int i,n,k,temp;
        printf("\n enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter %d elements of array\n",n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(k=0;k<n-1;k++)
        {
                for(i=0;i<n-k-1;i++)
                {
                        if(a[i]>a[i+1])
                        {
                                temp=a[i];
                                a[i]=a[i+1];
                                a[i+1]=temp;
                        }
                }
        }
        printf("\n array elements after shorting\n");
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
}
/*************************************************************************

OUTPUT:
enter the array size
8
enter 8 elements of array                                           
3
6
15
86
94
26
43
20

 array elements after shorting
3       6       15      20      26      43      86      94

***************************************************************************/
