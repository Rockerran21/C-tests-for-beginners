//
//  WAP TO PRINT A SEQUENCE.c
//  Function Tests
//
//  Created by Ranjan Marasini on 26/07/2022.
//

#include <stdio.h>
void star(int *n)
{
    int i,j;
    for (i=1; i<=*n; i++) {
        printf("\n");
        for (j=1; j<=i; j++) {
            printf("\t*");
        }
    }
    for (i=1; i<=*n; i++) {
        printf("\n");
        for (j=1; j<=i; j++) {
            printf("\t*");
        }
    }
}
/*int main()
{
    int a;
    printf("Enter the desired no :");
    scanf("%d",&a);
    star(&a);
}*/
