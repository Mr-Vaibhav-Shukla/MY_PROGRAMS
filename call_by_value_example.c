#include<stdio.h>
void swap(int a,int b);
void main()
{
int x,y;
printf("\n Enter value for x:");
scanf("%d",&x);
printf("\n Enter value for y:");
scanf("%d",&y);
printf("\n Before calling swap functin\n");
printf("\n Value of x=%d,Value of y=%d\n",x,y);
swap(x,y);
printf("\n After returning from swap function");
printf("\n Value of x=%d,value of y=%d\n",x,y);
}
void swap(int a,int b)
{
int temp;
printf("\n Inside the function \n");
printf("\n Value of a=%d,Value of b=%d before swaping\n",a,b);
temp=a;
a=b;
b=temp;
printf("\n Value of a=%d,Value of b=%d after swaping\n",a,b);
}

/********************************************************************
OUTPUT:

Enter value for x:8

 Enter value for y:6

 Before calling swap functin

 Value of x=8,Value of y=6

 Inside the function 

 Value of a=8,Value of b=6 before swaping
 ***********************************************************************/

 Value of a=6,Value of b=8 after swaping

 After returning from swap function
 Value of x=8,value of y=6
