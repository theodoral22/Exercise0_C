#include <stdio.h>
#include <math.h>

/***********************************************************************
The program reads an integer number (let's say x) from the user and 
calculates and displays on the screen the result of the following equation 
(a floating number): f(x)=(x^2-3)/(x-3).
***********************************************************************/
int main()
{
    int x; //the number we get from the user
    float f; //the result of the function
    scanf ("%d", &x);
    if (x!=3) //if the denominator is not 0, calculate the function
    {
     f=(pow(x,2)-3)/(x-3);
     printf ("%.1f", f);
    }
    else //if the denominator is 0, print "Infinite"
    {
     printf ("Infinite");
    }
    return 0;
}
