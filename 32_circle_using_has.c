/***********************************************************************************
THE STEPS TO DRAW THE CIRCLE USING #
$ enter radius
$ declare a square 2D matrix of size 2*radius+1 so as to find centre easily
$ now put centre of matrix as the as the centre of circle 
$ calculate distance of every  point from centre
$ if distance is aprox equal radius then put that point as '#' otherwise put it as '.'
$ print output
**************************************************************************************/

// HERE IS THE PROGRAM FOR PRINTING CIRCLE USING #
#include<stdio.h>
#include<math.h>
void main()
{       
        int r,m;
        printf("enter the radius\n");             //entering and storing radius
        scanf("%d",&r);

         m=2*r+1;    
        char a[m][m];                             //declaring a 2D square matrix of size (double the radius)+1             

        int cx,cy;
        cx=r+1;                                 //declaring the center cordinates
        cy=r+1;
        
        for(int i=1;i<=m;i++)
        {       
                for(int j=1;j<=m;j++)
                { 
                        a[i][j]='.';                   //initialising matrix elements
                }
        }


        float dis;
        for(int i=1;i<=m;i++)
        {
                for(int j=1;j<=m;j++)
                {
                        dis=sqrt((cx-i)*(cx-i)+(cy-j)*(cy-j));                  // calculating distance of every point from center 
                        if(dis>=r-0.5 && dis<=r+0.5)                        // checking if distance is aprox epual to radius 
                                a[i][j]='#';                                                //if dis = aprox(radius) then put that position element as '#'  

                }
        }

        for(int i=0;i<m+2;i++)
        {
                for(int j=0;j<m+2;j++)
                { 
                    if(i==0||j==0||i==m+1||j==m+1)                //adding border to output
                    printf(".");
                    else
                        printf("%c",a[i][j]);                                      //main output
                }
                printf("\n");
        }       
}      

/*******************************************************************************************************
OUTPUT:
enter the radius                                                                                                      
10                                                                                                                    
.......................                                                                                               
........#######........                                                                                               
......##.......##......                                                                                               
.....#...........#.....                                                                                               
....#.............#....                                                                                               
...#...............#...                                                                                               
..#.................#..                                                                                               
..#.................#..                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
.#...................#.                                                                                               
..#.................#..                                                                                               
..#.................#..                                                                                               
...#...............#...                                                                                               
....#.............#....                                                                                               
.....#...........#.....                                                                                               
......##.......##......                                                                                               
........#######........                                                                                               
.......................  

***********************************************************************************************************/
