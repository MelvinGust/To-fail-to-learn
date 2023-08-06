#include <stdio.h>
#include <math.h>

/*
This code receives an input: The amount of values (for sine and cosine) you want to show
in your table. And the output is modified based on it.

If you write 10, you'll receive 10 values of sine and cosine, for example.
*/

void main(){
    int amountValues;
    double resultSine, resultCosine, angleRadians;
    printf("How many values of sine and cosine do you wish to see: \n");
    scanf("%d", &amountValues);
    printf("--------------------------------------------------\n");
    for (int n = 0; n<=amountValues ; n++){
        angleRadians = ((double)n)/(amountValues);
        resultSine = sin(angleRadians);
        resultCosine = cos(angleRadians);
        printf("sin(%lf) = %lf  |  cos(%lf) = %lf \n", angleRadians, resultSine, angleRadians, resultCosine);
    }
    printf("--------------------------------------------------");
}
