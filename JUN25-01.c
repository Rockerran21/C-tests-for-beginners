//
//  WAP to find the Simple Interest.c
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
void simple(float*p,float*t,float*r)
{
    float s;
    s=(*p**t**r)/100;
    printf("\t The simple intrest is %f\n",s);
}
/*int main()
{
    
    float x,y,z;
    printf("Enter the principle time and rate of intrest :");
    scanf("%f%f%f",&x,&y,&z);
    simple(&x, &y, &z);
}*/

