//
//  WAP to print even natural numbers up to 20 and their sum..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int test()
{
    int i,n,sum=0;
    printf("Enter any no : \n");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        if (i%2==0) {
            printf("\t%d",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum is %d\n",sum);
    return (1);
}
//int main()
//{
 //   test();
//}
