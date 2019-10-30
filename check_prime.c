#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the number which you want check to wheather prime or not\n");
scanf("%d",&n);
if(n==1)
printf("number is neither prime nor composite\n");
else if(n<1)
printf("enter number greater than 1\n");
else
{
for(int i=2;i<n;i++)
{
if(n%i==0)
count++;
}
if(count==0)
printf("number is prime\n");
else 
printf("number is composite\n");
}
}

/******************************************************************************

OUTPUT:
--------------------------------------------------------------------------------
enter the number which you want check to wheather prime or not
56
number is composite
---------------------------------------------------------------------------------
enter the number which you want check to wheather prime or not
37
number is prime
---------------------------------------------------------------------------------

********************************************************************************/
