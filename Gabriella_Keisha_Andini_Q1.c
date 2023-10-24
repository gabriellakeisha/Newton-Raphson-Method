/* NT01012 Procedural Programming */
/* Programming Assignment 3       */
/*                                */
/* Question Number: 1             */
/* Name: Gabriella Keisha Andini  */
/* Date: 17.11.2022               */

#include <stdio.h>  /*include is a directive*/
#include <math.h>   /*new directive stdlib.h for utility functions*/
#include <stdlib.h> /*new directive math.h for mathematical calculation*/
#define e 0.001     /*to define E*/

int main ()
{
 float guess=1;/*integer variable for the guess start from 0*/
 float x; /*float variables needed*/

 //Inputs
 printf ("Enter a value : \n");
 scanf ("%f",&x);

 //Implementing Raphson Method to Compute Square Root of x
 do  {
    if  (x <= 0)
    {
    printf ("The root is imaginer");
    exit (0);
    }

    guess = ((x/guess)+guess)/2;

 }while (fabs (pow (guess,2)-x)>e); // test for convergence

 //Root result
 printf ("Square root is %.2f",guess);
 return 0;
}
