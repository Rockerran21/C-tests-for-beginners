//
//  WAP to input two matrices and find thier sum.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>

int matsum()
{
    float a[20][20],b[20][20],c[20][20];
    int i,j,c1,c2,r1,r2;
    printf("\nEnter the row and column of both the matrices simultaneously : ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if (r1==r2 && c1==c2){
        printf("\nNow enter the matrices simultaneously");
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                printf("\nEnter the element:");
                scanf("%f",&a[i][j]);
            }
        }
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                printf("\nEnter the element");
                scanf("%f",&b[i][j]);
            }
        }
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("The product of the given matrices is :" );
        for (i=1; i<=r1; i++) {
            printf("\n");
            for (j=1; j<=c1; j++) {
                printf("\t %f",c[i][j]);
            }
        }
        printf("\n");
    }else{
        printf("\nInvalid matrix\n");
    }
    return (1);
}
//int main()
//{
//    matsum();
//}
