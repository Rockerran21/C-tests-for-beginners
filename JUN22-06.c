//
//  WAP to input the average marks of 20 students and sort them in descending order also find the largest and smallest amongst them..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int decend()
{
    int i,j,n;
    float A[40],t;
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
        printf("\t %f",A[i]);
    }
    printf("\nThe largerst is %f and the smallest is %f \n",A[1],A[n]);
    return (1);
    
}
//int main()
//{
  //  decend();
//}
