//
//  WAP TO SWAP TO NUMBERS
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
void swap(float *a,float *b)
{
    float t;
    t=*a;
    *a=*b;
    *b=t;
    printf("\nThe number after swaping is %f and %f\n",*a,*b);
}
/*int main()
{
    float c,d;
    printf("Enter the desired numbers : ");
    scanf("%f %f",&c,&d);
    swap(&c, &d);
}*/
