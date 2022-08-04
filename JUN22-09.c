//
//  WAP to print the largest element of an array..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int check()
{
    int i,j,n;
    float A[100],t;
    printf("Enter the desired no : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%f",&A[i]);
    }
    for (i=1; i<=n-1; i++) {
        for (j=i+1; j<=n; j++) {
            if (A[i]<A[j]) {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    for (i=1; i<=n; i++) {
        printf("\t%f",A[i]);
    }
    printf("\nThe largest element of the array is %f\n",A[1]);
    return (1);
}
//int main(){
//    check();
//}
