#include<stdio.h>
#define PI 3.14159

int main(void)
{ 
/*Are we supposed to receive radius as a double? The problem
only specified that volume needs to be a double.*/
int radius;
printf("Enter radius:");
scanf("%d", &radius);
printf("volume is : %lf \n\n", 4*PI*radius*radius*radius/3.0 );
return 0;
}