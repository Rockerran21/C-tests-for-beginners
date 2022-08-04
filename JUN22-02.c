//
//  WAP to swap two numbers.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//
#include <stdio.h>
int swap()
{
    int i,j,k;
    printf("Enter the desired numbers : ");
    scanf("%d %d",&i,&j);
    k=i;
    i=j;
    j=k;
    printf("The numbers after swapping is %d and %d \n",i,j);
    return (1);
}
   // int main(){
       // swap();
   // }
