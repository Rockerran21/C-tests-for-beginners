//
// WAP to input an array and arrange them in either ascending or descending order.
//  Pointer
//
//  Created by Ranjan Marasini on 04/08/2022.
//
#include <stdio.h>
int main()
{
    int a[10],i,j,t,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("Enter the element of the array : ");
        scanf("%d",(a+i));
    }
    for (i=1; i<=n-1; i++) {
        for (j=i+1; j<=n; j++) {
            if (*(a+i)>*(a+j)) {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
    printf("\n The arrays sorted in ascending order is :");
    for (i=1; i<=n; i++) {
        printf("\t %d",*(a+i));
    }
    printf("\t");

}
