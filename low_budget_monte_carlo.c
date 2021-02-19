#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


/* Generating random float numbers between [0-1) */
double randfloat()
{ 
  return (double)rand() / (double)RAND_MAX;
}

int main(int argc, char *argv[])
{
  srand(time(NULL));//Seed rand() function
  
  double approx_pi = 0;
  double pi = 3.1415926535; //Constant pi 
  int counted_in_circle = 0;
  int iteration;
  scanf("%d",&iteration);
  
  for (int i = 0; i < iteration; i++)
  {  
    //Implementing (x-0.5)^2 and (y-0.5)^2
    double rand_x = pow( (randfloat()-0.5), 2.0);
    double rand_y = pow( (randfloat()-0.5), 2.0);
    double circle_equ = rand_x + rand_y;
   
   //Is the point(x,y) inside the circle of 0.5 radius
    if( circle_equ <= 0.25)
    {    
      counted_in_circle +=1;
    }
  
  } 
  
  approx_pi = ( 4 * counted_in_circle ) / (double)iteration;
  
  printf(" %.10f pi\n %.10f approximated pi", pi,approx_pi );


  return 0;

}
