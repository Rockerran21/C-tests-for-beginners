//
//  WAP to input a number and count the total no of digits in it.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int counter()
{
    int n,s,r,c=0,a;
    printf("Enter the desired no");
    scanf("%d",&n);
    a=n;
    s=0;
    while (n!=0) {
        r=n%10;
        c=c+1;
        s=s+r;
        n=n/10;
    }
    printf("\nYOU have %d digis in the number %d \n",c,a);
    return (1);
}
//int main(){
//    counter();
//}
