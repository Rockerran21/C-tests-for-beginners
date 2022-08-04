//
//  WAP to check if the number is prime or not..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int prime()
{
    int n,i,c=0;
    printf("Enter the desired number :");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        if (i % n==0) {
            c++;
        }}
        if (c==2) {
            printf("\nThe number is prime\n");
        }else{
            printf("\nThe number is composite\n");
        }
    return (1);
}
//int main()
//{
//    prime();
//}
