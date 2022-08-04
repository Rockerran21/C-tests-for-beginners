//
//  WAP TO FIND THE AREA AND CIRCUMFERENCE OF THE CIRCLE;
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
#include <math.h>
#define pi 3.14
void circum(float *c)

{
    float d,a;
    d=*c*2*pi;
    a=pi *pow(*c, 2);
    printf("/nThe circumference is %.2f and the area is %.2f \n",d,a);
}
/*int main()
{
    float r;
    printf("Enter the radius of the circle :");
    scanf("%f",&r);
    circum(&r);
}*/
