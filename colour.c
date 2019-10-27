#include<stdio.h>
void main()
{
        char c;
        printf("enter the first letter of colour r for red, b for blue, g for green, y for yellow\n");
        scanf("%s",&c);
        switch(c)
        {
                case 'r':
                        printf("Red\n");
                        break;
                case 'b':
                        printf("Blue\n");
                        break;
                case 'g':
                        printf("Green\n");
                        break;
                case 'y':
                        printf("Yellow\n");
                        break;
                default :
                        printf("enter valid charecter\n");
                        break;
        }
}
**************************************************************************

OUTPUT:

enter the first letter of colour r for red, b for blue, g for green, y for yellow
b               
Blue                 
