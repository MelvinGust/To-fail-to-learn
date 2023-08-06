#include <stdio.h>
#include <math.h>

/*
This code uses the math.h library file, which contains a function which directly calculates
the sine of an angle (given in radians). 
-> Basically, it'll give a "double" output based on a "double" input.
-> In the code, we use the variable inputAngle as our input into the sin() function, 
   result is then assigned to the variable resultSine.
*/
int main(void){
    double inputAngle, resultSine;
    printf("Please write an angle (in radians) that goes from 0 to 1: \n");
    scanf("%lf", &inputAngle);
    resultSine = sin(inputAngle);
    printf("The sine of %lf is %lf.", inputAngle, resultSine);
    return 0;
}