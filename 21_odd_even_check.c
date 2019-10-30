#include<stdio.h>
int main()
{
        int a;
        printf("Enter any integer\n");
        scanf("%d",&a);
        if(a%2==0)
        {
                printf("Enter number is EVEN\n");
        }
        else
        {
                printf("Enter number is ODD\n");
        }
        return 0;
}

/***************************************************************

OUTPUT:
----------------------------------------------------------------
Enter any integer
65
Enter number is ODD
----------------------------------------------------------------
Enter any integer
44
Enter number is EVEN
-----------------------------------------------------------------

*****************************************************************/
