//
//  WAP to get the result of the matrix multiplication..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int multiply()
{
    float a[20][20],b[20][20],c[20][20];
    int i,j,n,sum,k,m,p,q;
    printf("Enter the row and colum of the matrices simultaneously :");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    if (n==p) {
        for (i=1; i<=m; i++) {
            for (j=1; j<=n; j++) {
                printf("\nEnter the element of the matrix :");
                scanf("%f",&a[i][j]);
            }
        }
        for (i=1; i<=p; i++) {
            for (j=1; j<=q; j++) {
                printf("\nEnter the element of the matrix :");
                scanf("%f",&b[i][j]);
            }
        }
        for (i=1; i<=m; i++) {
            for (j=1; j<=q; j++) {
                sum=0;
                for (k=1; k<=p; k++) {
                    sum=sum + a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        for (i=1; i<=m; i++) {
            printf("\n");
            for (j=1; j<=q; j++) {
                printf("\t %f",c[i][j]);
            }
        }
    }
    else{
        printf("\nThe matrices are invalid for multiplication");
    }
    return (1);
}
//int main()
//{
//    multiply();
//}
