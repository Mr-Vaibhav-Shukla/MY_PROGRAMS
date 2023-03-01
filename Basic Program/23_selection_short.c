#include<stdio.h>
int smallest(int b[],int k,int m)
        {
        int i,index,min=b[k];
        for(i=k;i<m;i++)
                {
                if(b[i]<min)
                        {
                        index=i;
                        min=b[i];
                        }
                }
        return index;
        }
void main()
{
int n;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(int i=0;i<n;i++)
{
int temp,r;
r=smallest(a,i+1,n);
{
if(a[i]>a[r])
{
temp=a[i];
a[i]=a[r];
a[r]=temp;
}
}
}
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}

/***********************************************************************

OUTPUT:
enter the array size
9
enter the array elements
26
83
71
95
86
52
88
64
15
15      26      52      64      86      71      83      88      95

***************************************************************************/
