//
//  WAP to check if the given matrix is Square or Rectangular Matrix.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int square21()
{
    int r1,c1;
    printf("\nEnter the row and column of the matrices simultaneously : ");
    scanf("%d %d",&r1,&c1);
    if (r1==c1) {
        printf("The matrices is square\n");
    }
    else{
        printf("The matrix is rectangular\n");
    }
    return (1);
}
//int main()
//{
//    square21();
//}
