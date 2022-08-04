//
//  WAP to print the armstrong no between 1 and 1000.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
#include <math.h>
int arm()
{
    int n,a,b,c,d,i;
    printf("Enter the desired no : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        a=i/100;
        b=(i-a*100)/10;
        c=i-((a*100)+(b*10));
        d=pow(a, 3)+pow(b, 3)+pow(c, 3);
        if (d==i) {
            printf("%d\t",i);
        }
    }
    printf("\n");
    return (1);
}
//int main()
//{
  //  arm();
//}
