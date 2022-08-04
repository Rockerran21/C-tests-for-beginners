//
//  WAP to find the square of any no.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//
#include <stdio.h>
#include <math.h>
int square()
{
    int i,j;
    printf("Enter the desired no :");
    scanf("%d",&i);
    j=pow(i, 2);
    printf("\nThe square of the no is %d\n",j);
    return (1);
}
/*int main()
{
    square();
}*/
