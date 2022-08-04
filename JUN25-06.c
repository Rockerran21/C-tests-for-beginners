//
//  WAP to print the even natural numbers up to 20 and their sum
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
void natural(int *a)
{
    int i,sum=0;
    for (i=1; i<=*a; i++) {
        if (i%2==0) {
            printf("\t%d",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum is %d\n",sum);
}
/*int main()
{
    int n;
    printf("\nEnter the desired no : \n");
    scanf("%d",&n);
    natural(&n);
}*/
