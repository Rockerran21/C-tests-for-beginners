//
//  WAP TO PRINT ARMSTRONG BETWEEN 1 AND 1000.c
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
#include <math.h>
void arm(int *a)
{
    int i,b,c,d,e;
    printf("The armstrong number between 1 and %d are :",*a);
    for (i=1; i<=*a; i++) {
        b=i/100;
        c=(i-(b*100))/10;
        d=i-((b*100)+(c*10));
        e=pow(b, 3)+pow(c, 3)+pow(d, 3);
       
        if (i==e) {
            printf("\n %d\n",i);
        }
    }
}
/*int main()
{
    int n;
    printf("Enter the desired no :");
    scanf("%d",&n);
    arm(&n);
}*/

