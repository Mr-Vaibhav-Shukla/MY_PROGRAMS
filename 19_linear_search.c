#include<stdio.h>

int check(int b[],int m,int o)
{int p=-1;
        for(int i=1;i<=m;i++)
        {
                if(b[i]==o)
                 p = i;
        }

                        return p;
        
}

void main()
{
        int n,num,index;
        printf("enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter the array elements\n");
        for(int i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("now enter the number which you want to check\n whether it is present or not in entered array\n");

        scanf("%d",&num);
        index=check(a,n,num);
        if(index==-1)
        printf("element is not found\n");
        else
        printf("element is found at the position %d \n",index);
}

/***************************************************************************************************************************

OUTPUT:
enter the array size
9       
enter the array elements
1       
6       
7       
3       
8 
4       
6       
5
2       
now enter the number which you want to check
 whether it is present or not in entered array
4       
element is found at the position 6

*****************************************************************************************************************************/
