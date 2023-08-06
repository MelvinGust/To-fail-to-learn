#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

/*
Since we are using floating point numbers (double), I'll use the fabs() function
inside the math.h library. 
Unlike abs(), fabs() accepts a "double" as an input and gives a "double" as output, which serves
the job we need to do with this code.
*/

int main(void) { 
    /*
    Note this code doesn't really accept an input by the user. To change the interval, you've
    got to change the limit (for i) in the for argument. Is this intentional?
    */
    double interval;
    int i;
    for(i = 0; i <30; i++) {
        interval = i/10.0;
        printf("abs(sin( %lf )) = %lf \t", interval, fabs(sin(interval)));  
    }

    printf("\n+++++++\n");
    return 0;
}