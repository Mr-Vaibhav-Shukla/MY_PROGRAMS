
#include<stdio.h>
#include<math.h> 
int main()
{
float N,v1,v2,tw,tc; //declaring variables for distance ,velocity and time
printf("enter the distance between Hardeep's house and institute in meters \n ");
printf("distace should be more than 1 but less than 200\n");
scanf("%f",&N); //storing distance
printf("\n now enter the velocity of walking\n");
scanf("%f",&v1); //storing walking speed
printf("\n now enter the velocity of car \n");
scanf("%f",&v2); //storing car speed
if(1<=N && N<=200)
{
if(1<=v1&&v1<=100) //checking velocity and distance
{
if(1<=v2 && v2<=100)
{
tw=(2*sqrt(N))/v1; //calculating time taken in walking
tc=(N)/v2; //calculating time taken by car
printf("%f is the time taken in walking and %f is the time taken by car so\n",tw,tc);
if(tw<tc)
 printf("Hardeep need to walk\n");
else
printf("Hardeep need to use car\n");
}
}
}
}

/*********************************************************************************************

OUTPUT:
enter the distance between Hardeep's house and institute in meters                                                                              
 distace should be more than 1 but less than 200                                                                                                
165                                                                                                                                             
                                                                                                                                                
 now enter the velocity of walking                                                                                                              
12                                                                                                                                              
                                                                                                                                                
 now enter the velocity of car                                                                                                                  
36                                                                                                                                              
2.140872 is the time taken in walking and 4.583333 is the time taken by car so                                                                  
Hardeep need to walk 

************************************************************************************************/
